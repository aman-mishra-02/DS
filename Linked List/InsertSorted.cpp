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

void insertSorted(struct node *p,int x)
{
    struct node* t,*q=NULL;
    t=new node;
    t->data=x;
    t->next=NULL;
    while(p && p->data<x){
        q=p;p=p->next;
    }
    
    if(p==first){
        t->next=first;
        first=t;
    }
    else{
            q->next=t;
            t->next=p;
    }
}

void display(struct node*p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    cout << endl;
}


int main(){
    int a[]={3,5,8,12,15,20};
    create(a,6);
    display(first);
    insertSorted(first,2);
    insertSorted(first,14);
    display(first);

    // RevDisplay(first);
    return 0;
}