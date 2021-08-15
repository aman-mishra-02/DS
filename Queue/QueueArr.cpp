#include<iostream>
using namespace std;

class queue{
    private:
        int size;
        int f;
        int e;
        int *Q;
    public:
        queue(){
            size = 10;
            f=-1;
            e=-1;
            Q = new int[size]; 
        }
        queue(int size){
            this->size=size;
            f=-1;
            e=-1;
            Q = new int[this->size];
        } 
        void Enqueue(int x);
        int Dequeue();
        void Display();
};

void queue::Enqueue(int x){
    if(e==size-1){
        cout<<"QUEUE IS FULL"<<endl;
    }
    else{
        e++;
        Q[e]=x;  
    }      
}

int queue::Dequeue(){
    int x=-1;
    if(f==e){
        cout<<"QUEUE IS EMPTY"<<endl;
    }
    else{
        f++;
        x=Q[f];
        return x;
    }
    return x;
}

void queue::Display(){
    for(int i=f+1;i<=e;i++){
        cout<<Q[i]<<" ";
    }
    cout<<endl;
}

int main(){
    queue q(5);
    q.Enqueue(1);
    q.Enqueue(2);
    q.Enqueue(3);
    q.Enqueue(4);
    q.Enqueue(5);
    q.Enqueue(6);
    q.Display();
    cout<<q.Dequeue()<<endl;
    q.Display();
    cout<<q.Dequeue()<<endl;
    q.Display();
    cout<<q.Dequeue()<<endl;
    q.Display();
    cout<<q.Dequeue()<<endl;
    q.Display();
    cout<<q.Dequeue()<<endl;
    q.Display();
    cout<<q.Dequeue()<<endl;
    return 0;
}