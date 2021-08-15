#include<iostream>
using namespace std;

class lowertri{
    private:
        int *a;
        int n;
    public:
        lowertri(){
            n=2;
            a=new int[2];
        }
        lowertri(int n){
            this->n=n;           //this->n(class n)=n(local parameter)  
            a=new int[n*(n+1)/2];
        }

        ~lowertri(){
            delete []a;
        }

        void set(int i,int j,int k);
        int get(int i, int j);
        void display();

};

void lowertri::set(int i,int j,int k){
    if(i>=j){
        a[n*(j-1)+((j-2)*(j-1)/2)+i-j]=k;
    }
}

int lowertri::get(int i,int j){
    if(i<j)
        return 0;
    else
        return a[n*(j-1)+((j-2)*(j-1)/2)+i-j];
}

void lowertri::display(){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i>=j)
                cout<<a[n*(j-1)+((j-2)*(j-1)/2)+i-j]<<" ";
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
    lowertri dm(d);
    for(int i=1;i<=d;i++){
        for(int j=1;j<=d;j++){
            dm.set(i,j,x);
        }
    }
    dm.get(5,5);
    dm.display();
    return 0;
}