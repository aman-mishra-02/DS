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

int Max(struct node*p){
    int s=INT_MIN;
    while(p!=NULL){
        if(p->data>s)
            s=p->data;
        p=p->next;
    }
    return s;
}                                                          // while loop

int RMax(struct node *p){
    int x=0;
    if(p==NULL)
        return INT_MIN;
    x=RMax(p->next);
    if(x<p->data)
        return p->data;
    else   
        return x;
}                                                           // reccursion

int main(){
    struct node *temp;
    int a[]={3,4,5,7,25,8,32,2};
    create(a,8);

    cout<<Max(first)<<endl;

    cout<<RMax(first)<<endl;

    return 0;
}