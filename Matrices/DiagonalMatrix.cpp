#include<iostream>
using namespace std;

struct Matrix{
    int a[10];
    int n;
};

void set(struct Matrix *m,int i,int j,int k){
    if(i==j){
        m->a[i-1]=k;
    }
}

int get(struct Matrix m ,int i,int j){
    if(i!=j)
        return 0;
    else
        return m.a[i-1];
}

void Display(struct Matrix m ){
    int i,j;
    for(i=0;i<m.n;i++){
        for(j=0;j<m.n;j++){
            if(i==j)
                cout<<m.a[i]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}

int main(){
    struct Matrix m;
    m.n=4;
    set(&m,1,1,2);
    set(&m,2,2,3);
    set(&m,3,3,4);
    set(&m,4,4,5);
    get(m,1,1);
    Display(m);
    return 0;
}