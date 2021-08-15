#include <iostream>
using namespace std;

class node{
    public:
        char data;
        node *next;
};

class stack{
    public:
        node * top; 
        stack(){
            top=NULL;
        }
        void display();
        void push(char x);
        char pop();
        char peek(char index);
        int  is_Empty();
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

void stack::push(char x){
    node * t=new node;
    t->data=x;
    t->next=top;
    top=t;
}

char stack::pop(){
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

char stack::peek(char index){
    node* t=top;
    for(int i=1;i<=index;i++){
        t=t->next;
        if(t==NULL)
            return -1;
    else
        return t->data;
    }
}

int  stack::is_Empty(){
    if(top==NULL)return 1;
    else return 0;
}

int  stack::Top(){
    if(top==NULL)
        return 0;
    else 
        return top->data;
}

int isMatching(string e){
    int i;
    stack s;
    for(i=0;e[i]!='\0';i++){
        if(e[i]=='(')
            s.push(e[1]);
        else if(e[i]==')'){
            if(s.top==NULL){
                cout << " \n NOT MATCHING \n ";
                return 0;
            }
            s.pop();
        }
    }
    if(s.top==NULL)
        cout<<"\n MATCHING \n";
    else
        cout << " \n NOT MATCHING \n ";
    return 0;
}

int main(){
    stack s;
    string ex="((a+b)*(a*b))";
    isMatching(ex);
    string ex1="((a+b)*(a*b)))";
    isMatching(ex1);
    string ex2="(((a+b)*(a*b))";
    isMatching(ex2);
}