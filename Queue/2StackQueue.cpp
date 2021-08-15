#include<iostream>
#include<stack>
using namespace std;

class queue{
    private:
        stack<int> s1;
        stack<int> s2;
    public:
        queue(){}
        void enqueue(int x);
        int dequeue();
        int is_Empty();
};

int queue::is_Empty(){
    if(s1.empty() && s2.empty())
        return 1;
    return 0;
}

void queue::enqueue(int x){
    s1.push(x);
}

int queue::dequeue(){
    int x=-1;
    if(s1.empty() && s2.empty()){
        cout<<"\nqueue empty\n";
        return x;
    }
    if(!s2.empty()){
        x=s2.top();
        s2.pop();
        return x;
    }
    else{
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        x=s2.top();
        s2.pop();
        return x;
    }
}

int main(){
    queue q;
    q.enqueue(3);
    q.enqueue(2);
    q.enqueue(5);
    q.enqueue(7);
    cout<<" "<<q.dequeue()<<endl;
    //q.showq();
    q.enqueue(8);
    q.enqueue(6);
    q.enqueue(9);
    cout<<" "<<q.dequeue();
    cout<<" "<<q.dequeue();
    cout<<" "<<q.dequeue();
    cout<<" "<<q.dequeue();
    cout<<" "<<q.dequeue();
    cout<<" "<<q.dequeue();
    cout<<" "<<q.dequeue();
}