#include<iostream>
#include<queue>
#include<stack>

using namespace std;

class Node{
public:
    Node *lchild;
    int data;
    Node *rchild;
};

class tree{
private:
    Node* root;
public:
    tree(){root=NULL;}
    void TreeCreate();
    void PreOrder(){PreOrder(root);/* function to access root outside class indirectly which is private data member */}
    void PreOrder(Node *p);
    void PostOrder(){PostOrder(root);}
    void PostOrder(Node *p);
    void InOrder(){InOrder(root);}
    void InOrder(Node *p);
    int height(Node*p);
    int height(){height(root);}
    int NodeCount(Node *P);
    int NodeCount(){NodeCount(root);}
    int Sum(Node*p);
    int Sum(){Sum(root);}
    void preorder(Node*p);
    void preorder(){preorder(root);}
    void inorder(Node*p);
    void inorder(){inorder(root);}
    void postorder(Node*p);
    void postorder(){postorder(root);}
    void levelorder(Node*p);
    void levelorder(){levelorder(root);}
};

void tree::TreeCreate(){
    Node *p,*t;
    int x;
    queue<Node*> q;
    root=new Node;
    cout<<"Enter Root of Tree :- ";
    cin>>x;
    root->data=x;
    root->lchild=root->rchild=NULL;
    q.push(root);
    while(!q.empty()){
        p=q.front();
        q.pop();
        cout<<"eneter left child of "<<p->data<<" ";
        cin>>x;
        if(x!=-1){
            t=new Node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            q.push(t);
        }
        cout<<"eneter right child of "<<p->data<<" ";
        cin>>x;
    
        if(x!=-1){
            t=new Node;
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            q.push(t);
        }
    }
}

void tree::InOrder(Node *p){
    if(p){
        InOrder(p->lchild);
        cout<<p->data<<" ";
        InOrder(p->rchild);
    }
}

void tree::PreOrder(Node *p){
    if(p){
        PreOrder(p->lchild);
        PreOrder(p->rchild);
        cout<<p->data<<" ";  
    }
}

void tree::PostOrder(Node *p){
    if(p){
        cout<<p->data<<" ";
        PostOrder(p->lchild);
        PostOrder(p->rchild);  
    }
}

int tree::height(Node*p){
    if(p){
        if(height(p->lchild)>height(p->rchild))
            return height(p->lchild)+1;
        else
            return height(p->lchild)+1;
    }
    else
        return 0;
}

int tree::NodeCount(Node*p){
    if(p)
        return NodeCount(p->lchild)+NodeCount(p->rchild)+1;
    else 
        return 0;
}

int tree::Sum(Node*p){
    if(p)
        return Sum(p->lchild)+Sum(p->rchild)+p->data;
    else
        return 0;
}

void tree::inorder(Node *p){   // iterative inorder transversal;
    stack<Node*> st;
    st.push(p);
    while(p!=NULL||!st.empty()){
        if(p!=NULL){
            st.push(p);
            p=p->lchild;
        }
        else{
            p=st.top(); st.pop();
            cout<<p->data<<" ";
            p=p->rchild;
        }
    }    
}

void tree::preorder(Node *p){   // iterative preorder transversal;
    stack<Node*> st;
    st.push(p);
    while(p!=NULL||!st.empty()){
        if(p!=NULL){
            st.push(p);
            cout<<p->data<<" ";
            p=p->lchild;
        }
        else{
            p=st.top(); st.pop();
            p=p->rchild;
        }
    }    
}

void tree::levelorder(Node *p){
    queue<Node*> q;
    printf("%d ",p->data);
    q.push(p);
    
    while(!q.empty()){
        p=q.front(); q.pop();
        if(p->lchild){
            printf("%d ",p->lchild->data);
            q.push(p->lchild);
        }
        if(p->rchild){
            printf("%d ",p->rchild->data);
            q.push(p->rchild);
        }
    }
}

int main(){
    tree T;
    cout<<"CREATE TREE :-"<<endl;
    T.TreeCreate();
    cout<<"RECCURSIVE INORDER TRANSVERSAL :- ";
    T.InOrder();
    cout<<endl;
    cout<<"RECCURSIVE POSTORDER TRANSVERSAL :- ";
    T.PostOrder();
    cout<<endl;
    cout<<"RECCURSIVE PREORDER TRANSVERSAL :- ";
    T.PreOrder();
    cout<<endl;
    T.levelorder();
    cout <<endl;
    cout<<"HEIGHT OF TREE = "<<T.height()<<endl;
    cout<<"SUM OF NODES = "<<T.Sum()<<endl;
    cout<<"TOTAL NO. OF NODES "<<T.NodeCount()<<endl;
    cout<<"ITERATIVE INORDER TRANSVERSAL :- ";
    T.inorder();
    cout<<endl;
    cout<<"ITERATIVE INORDER TRANSVERSAL :- ";
    T.preorder();
    cout<<"ITERATIVE INORDER TRANSVERSAL :- ";
    cout<<endl;
}


