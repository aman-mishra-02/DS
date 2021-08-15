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

node* Search(struct node*p,int k){

    while(p!=NULL){
        if(p->data==k)
            return p;
        p=p->next;
    }
    return NULL;
}                                                          // while loop

node* Search2(node *p,int k)
{
    node * q=NULL;
    while(p!=NULL)
    {
        if(k==p->data)
        {
            q->next=p->next;                               // Making key node header;             
            p->next = first;                               
            first =p;
        }
        q=p;
        p=p->next;
    }
}                                                         // improved search algorithm;      


node* RSearch(struct node *p,int k){
    if(p==NULL)
        return NULL;
    if(k==p->data)
        return p;
    
    return RSearch(p->next,k);
}                                                           // reccursion

int main(){
    struct node *temp;
    int a[]={3,4,5,7,25,8,32,2};
    create(a,8);

    cout<<Search(first,10)<<endl;
    temp = RSearch(first,7);
    cout<<temp->data<<endl;

    return 0;
}