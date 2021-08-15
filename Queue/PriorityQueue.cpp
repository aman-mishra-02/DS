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
        int not_Empty();
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
        cout<<" "<<q->data<<" ";
        q=q->next;
    }
}

int queue::not_Empty(){
    if(front == rear)
        return 0;
    return 1;
}

int queue::is_Empty(){
    if(front == rear)
        return 1;
    return 0;
}

int main(){
    queue q1,q2,q3;
    int ch,pri,x;
    // q1.Enqueue(1);
    // q2.Enqueue(1);
    // q3.Enqueue(1);
    // q1.Enqueue(1);
    // q2.Enqueue(1);
    // q3.Enqueue(1);
    // q1.Display();
    // q2.Display();
    // q3.Display();
    do{
        cout<<" MENU :-"<<endl;
        cout<<"1. ENQUEUE \n2. DEQUEUE\n3. DISPLAY\n4. EXIT \n";
        cin>>ch;
        switch(ch){
            case 1:{
                cout<<"ENTER ELEMENT \n";
                cin>>x;
                cout<<"ENTER PRIORITY \n"<<endl;
                cin>>pri;
                if(pri==1)
                    q1.Enqueue(x);
                else if(pri == 2)
                    q2.Enqueue(x);
                else if(pri==3)
                    q3.Enqueue(x);
                else 
                    cout<<"!!! INVALID PRIORITY !!!";
                break;
            }
            case 2:{
                if(q1.not_Empty())
                    q1.Dequeue();
                else if(q1.is_Empty()&&q2.not_Empty())
                    q2.Dequeue();
                else if(q1.is_Empty() && q2.is_Empty() && q3.not_Empty())
                    q3.Dequeue();
                else
                    cout<<" QUEUE IS EMPTY \n";
                break;
            }
            case 3:{
                if(q1.not_Empty())
                    q1.Display();
                if(q2.not_Empty())
                    q2.Display();
                if(q3.not_Empty())
                    q3.Display();
                break;
            }
            case 4:
                break;
        }
    }
    while(ch!=4);
    return 0;
}