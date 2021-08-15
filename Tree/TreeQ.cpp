#include<iostream>

using namespace std;

class Node{
    public:
    Node *lchild;
    int data;
    Node *rchild;
}*root=NULL;

class Queue{
    public:
    int size;
    int front;
    int rear;
    Node **Q;
    Queue(int s){ size=s; front=rear=0; Q=new Node*;}
    void enqueue(Node *x);
    Node * dequeue();
    int isEmpty();
};


void Queue::enqueue(Node *x){
    if((rear+1)%size==front)
        cout<<"Queue is Full";
    else{
        rear=(rear+1)%size;
        Q[rear]=x;
    }
}

Node * Queue::dequeue(){
    struct Node* x=NULL;
    
    if(front==rear)
        cout<<"Queue is Empty\n";
    else{
        front=(front+1)%size;
        x=Q[front];
    }
    return x;
}

int Queue::isEmpty(){
    return front==rear;
}

void Treecreate(){
    Node *p,*t;
    int x;
    Queue q(100);
    
    cout<<"Eneter root value ";
    cin>>x;
    root=new Node;
    root->data=x;
    root->lchild=root->rchild=NULL;
    q.enqueue(root);
    
    while(!q.isEmpty()){
        p=q.dequeue();
        cout<<"eneter left child of "<<p->data<<" ";
        cin>>x;
        if(x!=-1){
            t=new Node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            q.enqueue(t);
        }
        cout<<"eneter right child of "<<p->data<<" ";
        cin>>x;
    
        if(x!=-1){
            t=new Node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            q.enqueue(t);
        }
    }
}

void Preorder(Node *p){
    if(p){
        cout<<" "<<p->data;
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void Inorder(Node *p){
    if(p){
        Inorder(p->lchild);
        cout<<" "<<p->data;
        Inorder(p->rchild);
    }
}

void Postorder(Node *p){
    if(p){
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout<<" "<<p->data;
    }
}

int main(){
    Treecreate();
    Preorder(root);
    cout<<"\nPost Order ";
    Postorder(root);
    
    return 0;
}