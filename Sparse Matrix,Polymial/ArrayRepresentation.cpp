#include <iostream>
#include <stdlib.h>
using namespace std;

struct element{
    int i;
    int j;
    int x;
};

struct sparce{
    int m;
    int n;
    int num;
    struct element *e;
};

void create(struct sparce *s){
    int i;
    cout<<"enter dimension :- "<<endl;
    cin>>s->m>>s->n;
    cout<<"No on non zero element :-"<<endl;
    cin>>s->num;
    s->e=new element[s->num];                       // array of element of size s.num;
    cout << "Enter non zero elements:- "<<endl;
    for(i=0;i<s->num;i++){
        cin>>s->e[i].i>>s->e[i].j>>s->e[i].x;
    }
}

void display(struct sparce s){
    int i,j;
    int k=0;
    for(i=0;i<s.m;i++){
        for(j=0;j<s.n;j++){
            if(i==s.e[k].i && j==s.e[k].j)
                cout<<s.e[k++].x<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}

struct sparce * add(struct sparce *s1,struct sparce *s2){
    struct sparce *sum;
    int i,j,k;
    i=j=k=0;

    if(s1->n!=s2->n || s1->m!=s2->m)
        return NULL;

    sum = (struct sparce *)malloc(sizeof(struct sparce));  
    sum->e= new element[s1->num+s2->num];
    while(i<s1->num && j<s2->num){
        if(s1->e[i].i<s2->e[j].i)
            sum->e[k++]=s1->e[i++];
        else if(s1->e[i].i>s2->e[j].i)
            sum->e[k++]=s2->e[j++];
        else{
            if(s1->e[i].j<s2->e[j].j)
                sum->e[k++]=s1->e[i++];
            else if(s1->e[i].j>s2->e[j].j)
                sum->e[k++]=s2->e[j++];
            else{
                sum->e[k]=s1->e[i];
                sum->e[k++].x=s1->e[i++].x+s2->e[j++].x;
            }
        }
    }
    for(;i<s1->num;i++)
        sum->e[k++]=s1->e[i];
    for(;j<s2->num;j++)
        sum->e[k++]=s1->e[i];

    sum->m=s1->m;
    sum->n=s2->n;
    sum->num=k;
}

int main(){
    struct sparce s1,s2,*s3;

    create(&s1);
    create(&s2);
    s3=add(&s1,&s2);

    cout<<" MATRIX 1 "<<endl;
    display(s1);
    cout<<" MATRIX 2 "<<endl;
    display(s2);
    cout<<" MATRIX 3 (SUM) "<<endl;
    display(*s3);
    return 0;
}