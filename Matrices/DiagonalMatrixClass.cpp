#include<iostream>
using namespace std;

class diagonal{
    private:
        int *a;
        int n;
    public:
        diagonal(){
            n=2;
            a=new int[2];
        }
        diagonal(int n){
            this->n=n;           //this->n(class n)=n(local parameter)  
            a=new int[n];
        }

        ~diagonal(){
            delete []a;
        }

        void set(int i,int j,int k);
        int get(int i, int j);
        void display();

};

void diagonal::set(int i,int j,int k){
    if(i==j){
        a[i-1]=k;
    }
}

int diagonal::get(int i,int j){
    if(i!=j)
        return 0;
    else
        return a[i-1];
}

void diagonal::display(){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j)
                cout<<a[i]<<" ";
            else
                cout<<"0 ";
        }
        cout<<endl;
    }
}

int main(){
    int d,x;
    cout<<"enter dimention ";
    cin>>d;
    diagonal dm(d);
    for(int i=1;i<=d;i++){
        for(int j=1;j<=d;j++){
            cin>>x;
            dm.set(i,j,x);
        }
    }
    dm.get(1,1);
    dm.display();
    return 0;
}