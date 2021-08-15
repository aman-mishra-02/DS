#include <iostream>
using namespace std;

struct node{
    int col;
    int val;
    struct node *next;
};

struct sparce{
    int m;
    int n;
    struct node *e;
};

void create(struct sparce *s){
    cin>>s->m;
    cin>>s->n;
    s->e=new node[s->m];

}

void display(struct sparce s){
    
}

int main(){
    int m;
    struct sparce s;
    create(&s);
}