#include <iostream>
using namespace std;

class node{
    public:
        int data;
        struct node *next;  
}*first=NULL,*second=NULL,*third=NULL,*fourth=NULL;

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


void create2(int a[],int n){
    int i;
    node *t,*last;
    second=new  node;
    second->data=a[0];
    second->next=NULL;
    last = second;

    for(i=1;i<n;i++){
        t=new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last = t;
    }
}

// void concatenate(struct node*p,struct node*q){
//     third=p;
    
//     while (p->next!=NULL)
//         p=p->next; 
//     p->next=q;
// }

void merge(node*p, node*q){
    node* last;
    if(p->data<q->data){
        fourth=last=p;
        p=p->next;
        last->next=NULL;
    }
    else{
        fourth=last=q;
        q=q->next;
        last->next=NULL;
    }
    while (p!=NULL&&q!=NULL)
    {
        if(p->data<q->data){
            last->next=p; last=p;
            p=p->next; last->next=NULL;
        }
        else{
            last->next=q; last=q;
            q=q->next; last->next=NULL;
        }
    }
    if(p!=NULL){
        last->next=p;
    }
    else{
        last->next=q;
    }
}

void display(node*p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    cout << endl;
}


int main(){
    int a[]={2,4,6,8,10,12,14,16};
    int b[]={1,3,5,7,9};
    create(a,8);
    create2(b,5);
    cout<<"first:- "<<endl;
    display(first);
    cout<<"second:- "<<endl;
    display(second);
    merge(first,second);
    cout<<"first & second merged:- "<<endl;
    display(fourth);
    // concatenate(first,second);
    // cout<<"first & second concatenated:- "<<endl;
    // display(third);
    
    return 0;
}