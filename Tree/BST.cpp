// BINARY SEARCH TREE

#include<iostream>
#include<stack>

using namespace std;

class node{
    public:
        int data;
        node* lc;
        node* rc;
};

class bst{
    private:
        node* root;
    public:
        bst(){root=NULL;}
        void insert(int k);
        bool search(int k);
        void InOrder(node *p);
        void InOrder(){InOrder(root);}
        
};

bool bst::search(int k){
    node *p;
    p=root;
    while(p!=NULL){
        if(p->data==k)
            return true;
        else if(p->data<k)
            p=p->rc;
        else if(p->data>k)
            p=p->lc;
    }
    return false;
}

void bst::insert(int k){
    node *p,*t=root;
    node*r=NULL;
    if(root==NULL){
        p=new node;
        p->data=k;
        p->lc=p->rc=NULL;
        root=p;
        return;
    }
    while(t!=NULL){
        r=t;
        if(r->data<k)
            t=t->rc;
        else if(r->data>k)
            t=t->lc;
        else
            return;
    }
    p=new node;
    p->data=k;
    p->lc=p->rc=NULL;
    if(r->data>k)
        r->lc=p;
    else
        r->rc=p;
}

void bst::InOrder(node *p){
    if(p){
        InOrder(p->lc);
        cout<<p->data<<" ";
        InOrder(p->rc);
    }
}

int main(){
    bst bst;
    bst.insert(10);
    bst.insert(1);
    bst.insert(12);
    bst.insert(3);
    bst.insert(11);

    bst.InOrder();cout<<endl;

    if(bst.search(12))
        cout<<"ELEMENT FOUND "<<endl;
    else
        cout<<"!!! NOT FOUND !!!"<<endl;
    
    if(bst.search(2))
        cout<<" ELEMENT FOUND "<<endl;
    else
        cout<<" !!! NOT FOUND !!!"<<endl;
}