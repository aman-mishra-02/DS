// BINARY SEARCH TREE

#include<iostream>
#include<stack>

using namespace std;

struct node{
        int data;
        node* lc;
        node* rc;
}*root=NULL;


void PreCreate(int p[],int n){
    stack<node*> st;
    node*t;
    int i=0;
    root=new node;
    root->data=p[i++];
    root->lc=root->rc=NULL;
    node *q=root;
    while(i<n){
        if(p[i]<q->data){
            t=new node;
            t->data=p[i++];
            t->lc=t->rc=NULL;
            q->lc=t;
            st.push(q);
            q=t;
        }
        else{
            if(p[i]>q->data && p[i]<st.top()->data){
                t=new node;
                t->data=p[i++];
                t->lc=t->rc=NULL;
                q->rc=t;
                q=t;
            }
            else{
                q=st.top();
                st.pop();
            }
        }
    }
}


void InOrder(node *p){
    if(p){
        InOrder(p->lc);
        cout<<p->data<<" ";
        InOrder(p->rc);
    }
}

int main(){
    int a[]={10,4,6,5,20,25};
    PreCreate(a,6);
    InOrder(root);cout<<endl;

    return 0;
}