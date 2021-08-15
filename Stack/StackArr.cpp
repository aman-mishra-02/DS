#include <iostream>
using namespace std;

struct stack{
    int size;
    int top;
    int *s;  
};

void create(struct stack *st,int siz){
    st->size=siz;
    st->top=-1;
    st->s=new int [st->size];
}

void display(struct stack st){
    for(int i=st.top;i>-1;i--){
        cout<<st.s[i]<<" ";
    }
    cout << endl;
}

void push(struct stack *st,int x){
    if(st->top==st->size-1)
        cout <<" STACK OVERFLOW "<<endl;
    else
        st->s[++st->top]=x;
}

int pop(struct stack *st){
    int x=-1;
    if(st->top==-1)
        cout<<"STACK EMPTY "<<endl;
    else{
        x=st->s[st->top];
        st->top--;
    }
    return x;       
}

int peek(struct stack st,int index){
    if(st.top-index+1<0)
        return -1;
    else
        return st.s[st.top-index+1];
}

int is_Empty(struct stack st){
    if(st.top==-1)return 1;
    else return 0;
}

int is_Full(struct stack st){
    if(st.top==st.size-1) return 1;
    else return 0;
}

int Top(struct stack st){
    if(st.top==-1)
        return 0;
    else 
        return st.s[st.top];
}

int main(){
    struct stack s;
    create(&s,5);
    cout<<"is_Empty - "<<is_Empty(s)<<endl;
    cout<<"is_Full - "<<is_Full(s)<<endl;

    push(&s,1);
    push(&s,10);
    push(&s,11);
    push(&s,100);
    push(&s,101);
    
    display(s);
    
    cout<<"POP "<<pop(&s)<<endl;
    
    display(s);
    
    cout<<"PEEK AT INDEX 3 "<<peek(s,3)<<endl;
    
    cout<<"TOP ELEMENT - "<<Top(s)<<endl;
}