#include <iostream>
using namespace std;

class node{
    public:
        int data;
        struct node *next;  
}*first=NULL;

void create(int a[],int n){
    int i;
    node *t,*last;
    first=new node;
    first->data=a[0];
    first->next=NULL;
    last = first;

    for(i=1;i<n;i++){
        t=new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last = t;
    }
}

void display(struct node*p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    cout << endl;
}

int count( node*p){
    int l=0;
    while(p!=NULL){
        l++;
        p=p->next;
    }
    return l;
}            

int Delete(node *p,int index){
    int x=-1,i;
    node*q=NULL;
    if(index<1||index>count(p))
        return -1;
    if(index==1){
        q=first;
        x=first->data;
        first = first->next;
        free(q);
        return x;
    }
    else{
        for(i=0;i<index-1;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        free(p);
        return x;
    }
}

int main(){
    int a[]={3,4,5,7,25,8,32,2};
    create(a,8);
    cout<<Delete(first,1)<<endl;
    display(first);
    cout<<Delete(first,4)<<endl;
    display(first);
    return 0;
}