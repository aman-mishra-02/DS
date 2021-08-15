#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;  
}*first=NULL;

void Insert(struct node*p,int pos,int x){
    node*t=new node;
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
        printf("%d->",p->data);
        p=p->next;
    }
    cout<<"NULL";
    cout << endl;
}

int main(){
    Insert(first,0,3);
    Insert(first,1,5);
    Insert(first,1,4);
    Insert(first,3,7);
    Insert(first,3,6);
    display(first);
    return 0;
}