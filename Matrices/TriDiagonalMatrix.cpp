#include<iostream>
using namespace std;

class TriDia{
    private:
        int *a;
        int n;
    public:
        TriDia(){
            n=2;
            a=new int[2];
        }
        TriDia(int n){
            this->n=n;           //this->n(class n)=n(local parameter)  
            a=new int[3*n-2];
        }

        ~TriDia(){
            delete []a;
        }

        void set(int i,int j,int k);
        int get(int i, int j);
        void display();

};

void TriDia::set(int i,int j,int k){
    if(i-j==1)
        a[i-2]=k;
    else if(i-j==0)
        a[(n-1)+(i-1)]=k;
    else if(i-j==-1) 
        a[(2*n-1)+(i-1)]=k;
}

int TriDia::get(int i,int j){
    if(i-j==1)
        return  a[i-2];
    else if (i-j==0)
        return  a[(n-1)+(i-1)];
    else if (i-j==-1)
        return  a[(2*n-1)+(i-1)];
    else 
        return 0;
}

void TriDia::display(){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i-j==1)
                cout<<a[i-2]<<" ";
            else if(i-j==0) 
                cout<<a[(n-1)+(i-1)]<<" ";
            else if (i-j==-1)
                cout<<a[(2*n-1)+(i-1)]<<" ";
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
    TriDia dm(d);
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