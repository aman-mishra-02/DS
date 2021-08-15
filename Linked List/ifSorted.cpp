#include <iostream>
#include <climits>
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

int ifSorted(struct node*p){
    int x= INT_MIN;
    while(p!=NULL){
        if(p->data<x)
           return 0;
            
        x=p->data;
        p=p->next;
    }
    return 1;
}                                                         

int main(){
    struct node *temp;
    int a[]={3,4,5,7,25,8,32,2};
    create(a,8);

    cout<<ifSorted(first)<<endl;
    
    

    return 0;
}