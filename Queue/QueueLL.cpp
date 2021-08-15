#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node * next;
};

class queue{
    private:
        node* front;
        node* rear;
    public:
        queue(){
            front = rear = NULL;
        }
        void Enqueue(int x);
        int Dequeue();
        void Display();
        int is_Empty();
};

void queue::Enqueue(int x){
    node* t;
    t=new node;
    t->data=x;
    t->next=NULL;
    if(front == NULL){
        front = rear = t;
    }
    else{
        rear->next=t;
        rear=t;
    }
}

int queue::Dequeue(){
    int x=-1;
    if(front == NULL){
        cout <<" QUEUE IS EMPTY "<<endl;
        return x;
    }
    else{
        node *q;
        x=front->data;
        q=front;
        front =front ->next;
        delete(q);
    }
}

void queue::Display(){
    node*q=front;
    while(q!=NULL){
        cout<<q->data<<" ";
        q=q->next;
    }
    cout<<endl;
}

int queue::is_Empty(){
    if(front == rear)
        return 1;
    return 0;
}

int main(){
    queue q;
    q.Dequeue();
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Display();
    cout<<q.Dequeue()<<endl;
    q.Display();
    return 0;
}