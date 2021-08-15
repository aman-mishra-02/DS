#include <iostream>
using namespace std;

class stack{
    private:
        int size;
        int top;
        int *s;  
    public:
        stack(){
            size = 10;top=-1;s=new int [10];
        }
        stack( int size ){
            size=this->size;top=-1;s=new int [this->size];
        }
        ~stack(){delete [] s;}
        void display();
        void push(int x);
        int pop();
        int peek(int index);
        int  is_Empty();
        int  is_Full();
        int  Top();
};

void stack::display(){
    for(int i=top;i>-1;i--){
        cout<<s[i]<<" ";
    }
    cout << endl;
}

void stack::push(int x){
    if(top==size-1)
        cout <<" STACK OVERFLOW "<<endl;
    else
        s[++top]=x;
}

int stack::pop(){
    int x=-1;
    if(top==-1)
        cout<<"STACK EMPTY "<<endl;
    else{
        x=s[top];
        top--;
    }
    return x;       
}

int stack::peek(int index){
    if(top-index+1<0)
        return -1;
    else
        return s[top-index+1];
}

int  stack::is_Empty(){
    if(top==-1)return 1;
    else return 0;
}

int  stack::is_Full(){
    if(top==size-1) return 1;
    else return 0;
}

int  stack::Top(){
    if(top==-1)
        return 0;
    else 
        return s[top];
}

int main(){
    stack s(5);
    cout<<"is_Empty - "<<s.is_Empty()<<endl;
    cout<<"is_Full - "<<s.is_Full()<<endl;

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