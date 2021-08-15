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

void insert(struct node*p , int pos,int x)
{
    struct node* t;
    t=new node;
    t->data=x;
    
    if(pos==0){
        t->next=first;
        first=t;
    }
    else{
        p=first;
        for(int i=0;i<pos-1;i++){
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
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
    int a[]={3,4,5,7,25,8,32,2};
    create(a,8);
    display(first);
    insert(first, 3,6);
    insert (first,1,4);
    display(first);

    // RevDisplay(first);
    return 0;
}