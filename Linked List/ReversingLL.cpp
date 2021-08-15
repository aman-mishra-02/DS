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

/*  USING ARRAY EXTRA SPACE IS RECUIRED TO CREATE ARRAY TIME =O(2n) */
void Rev1(struct node* p){
    int A[count(p)];
    int i=0;
    while(p!=NULL){
        A[i++]=p->data;
        p=p->next;
    }
    p=first;
    i--;
    while(p!=NULL){
        p->data=A[i--];
        p=p->next;                                                          
    }                                                             
}

/*  MOVING POINTER TIME=O(n) MORE PREFERED THAN SWAPING DATA    */
void Rev2(struct node *p ){
    struct node* r=NULL;
    struct node * q=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
}

/*  USING RECURSION TO SLIDE POINTER   */
void Rev3(struct node *q,struct node*p){
    if(p){
        Rev3(p,p->next);
        p->next=q;
    }
    first=q;
}

int main(){
    struct node *temp;
    int a[]={3,4,5,6,8};
    create(a,5);
    display(first);
    Rev1(first);
    display(first);
    Rev2(first);
    display(first);
    Rev3(first,first->next);
    display(first);
    return 0;
}