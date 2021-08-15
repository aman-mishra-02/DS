#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node *next;
};

class stack{
    private:
        node * top; 
    public:
        stack(){
            top=NULL;
        }
        void display();
        void push(int x);
        int pop();
        int peek(int index);
        bool  is_Empty();
        int  Top();
};

void stack::display(){
    node* p=top;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout << endl;
}

void stack::push(int x){
    node * t=new node;
    t->data=x;
    t->next=top;
    top=t;
}

int stack::pop(){
    int i=-1;
    if(top==NULL)
        cout<<"STACK EMPTY "<<endl;
    else{
        i=top->data;
        node* t=top;
        top=top->next;
        delete(t);
    }
    return i;       
}

int stack::peek(int index){
    node* t=top;
    for(int i=1;i<=index;i++){
        t=t->next;
        if(t==NULL)
            return -1;
    else
        return t->data;
    }
}

bool  stack::is_Empty(){
    if(top==NULL)return true;
    else return false;
}

int  stack::Top(){
    if(top==NULL)
        return 0;
    else 
        return top->data;
}

int main(){
    stack s;
    cout<<"is_Empty  "<<s.is_Empty()<<endl;

    s.push(1);
    s.push(10);
    s.push(11);
    s.push(100);
    s.push(101);
    
    s.display();
    
    cout<<"POP "<<s.pop()<<endl;
    
    s.display();
    
    cout<<"PEEK AT INDEX 3 "<<s.peek(3)<<endl;
    
    cout<<"TOP ELEMENT - "<<s.Top()<<endl;
}