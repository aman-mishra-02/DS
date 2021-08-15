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

void display(struct node*p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    cout << endl;
}

int count(struct node*p){
    int l=0;
    while(p!=NULL){
        l++;
        p=p->next;
    }
    return l;
}            

void DelDup(struct node *p){
    struct node*q=p->next;
    while(q!=NULL){
        if(p->data!=q->data){
            p=q;
            q=q->next;
    }   
        else{
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }
    
}

int main(){
    struct node *temp;
    int a[]={3,4,5,5,6,8,8,8};
    create(a,8);
    display(first);
    DelDup(first);
    display(first);

    
    return 0;
}