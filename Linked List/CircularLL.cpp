#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;  
}*Head=NULL;

void create(int a[],int n){
    int i;
    struct node *t,*last;
    Head=new struct node;
    Head->data=a[0];
    Head->next=Head;
    last = Head;

    for(i=1;i<n;i++){
        t=new struct node;
        t->data=a[i];
        t->next=last->next;
        last->next=t;
        last = t;
    }
}

void display(struct node*p){
    do{
        printf("%d ",p->data);
        p=p->next;
    }
    while(p!=Head);
    cout << endl;
}

void RecDisplay(struct node *p){
    static int flag=0;
    if(p!=Head||flag==0){
        flag=1;
        cout<<p->data<<" ";
        RecDisplay(p->next);
    }
    flag=0;
}

int ifLoop(struct node * p){
    struct node *q;
    p=q=Head;
    while(p!=NULL){
        p=p->next;
        q=q->next;
        if(q!=NULL)
            q=q->next;
        else
            q=NULL;
        if(p==q)
            return 1;    
    }
    return 0;
}

// void Insert(int pos, int key){

// }

int Delete(struct node *p,int pos){
    int x;
    struct node*q=NULL;
    if(pos == 1){
        x=Head->data;
       while(p->next!=NULL)p=p->next;
       if(p==Head){
           delete(Head);
           Head=NULL;
       }
       else{
           p->next=Head->next;
           delete(Head);
           Head=p->next; 
       }
    }
    else{
        for(int i=0;i<pos-2;i++)
            p=p->next;
        q=p->next;
        x=q->data;
        p->next=q->next;
        free(q);    
    }
    return x;
}

int main(){
    struct node *temp;
    int a[]={3,4,5,7,25,8,32,2};
    create(a,8);
    display(Head);
    RecDisplay(Head);
    if(ifLoop(Head))
        cout<<"\n LOOP \n";
    else
        cout<<"\n LINEAR \n";

    Delete(Head,5);
    display(Head);

    return 0;
}