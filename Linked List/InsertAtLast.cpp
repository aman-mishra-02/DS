#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;  
}*first=NULL;

void display(struct node*p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    cout << endl;
}

void InsertLast(int k){
    struct node *n,*last;
    n=new node;
    n->data=k;
    n->next=NULL;
    if (first==NULL){
        last=first=n;
    }
    else{
        last->next=n;
        n=last;
    }
}

int main(){
    InsertLast(1);
    InsertLast(2);
    InsertLast(3);
    InsertLast(5);
    display(first);
    return 0;
}