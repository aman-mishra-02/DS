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

void RevDisplay(struct node *p){
    if(p!=NULL){
        RevDisplay(p->next);
        cout<<p->data<<" ";
    }
}

int main(){
    struct node *temp;
    int a[]={3,4,5,7,25,8,32,2};
    create(a,8);

    display(first);

    RevDisplay(first);
    return 0;
}