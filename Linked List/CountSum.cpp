#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;  
}*first=NULL;

void create(int a[],int n){
    int i;
    struct node *t,*last;
    first=new struct node;
    first->data=a[0];
    first->next=NULL;
    last = first;

    for(i=1;i<n;i++){
        t=new struct node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last = t;
    }
}

int count(struct node*p){
    int l=0;
    while(p!=NULL){
        l++;
        p=p->next;
    }
    return l;
}                                                           // While loop;

int Sum(struct node*p){
    int s=0;
    while(p!=NULL){
        s+=p->data;
        p=p->next;
    }
    return s;
}                                                          // while loop

int RCount(struct node *p){
    if(p!=NULL){
        return RCount(p->next)+1;
    }
    else
        return 0;
}                                                           // reccursion

int RSum(struct node *p){
    if(p!=NULL){
        return RSum(p->next)+p->data;
    }
    else
        return 0;
}                                                           // reccursion

int main(){
    struct node *temp;
    int a[]={3,4,5,7,25,8,32,2};
    create(a,8);

    cout<<count(first)<<endl;

    cout<<RCount(first)<<endl;

    cout<<Sum(first)<<endl;

    cout<<RSum(first)<<endl;

    return 0;
}