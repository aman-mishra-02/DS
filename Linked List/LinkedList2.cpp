#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;  
        node(int val){
            data = val;
            next =NULL;
        }

};

void InsertAtHead(node* &head ,int val){
    node* n=new node(val);
    n->next=head;
    head = n;
}

void InsertAtTail(node* &head,int val){
    
    node* n=new node(val);
    
    if(head==NULL){
        head = n;
        return;
    }
    node * temp =head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    while(head!=NULL){
        printf("%d->",head->data);
        head=head->next;
    }
    cout <<"NULL"<< endl;
}

int main(){
    node * head = NULL;
    
    InsertAtTail(head , 4);
    InsertAtTail(head,5);
    InsertAtTail(head , 7);
    display(head);
    InsertAtHead(head, 6);
    display(head);
    
    return 0;
}