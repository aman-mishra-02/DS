#include <iostream>
using namespace std;

class tioplitz{
    private:
        int *a;
        int n;
    public:
        tioplitz(){
            n=2;
            a=new int[2];
        }
        tioplitz(int n){
            this->n=n;
            a=new int[2*n-1];
        }
        ~tioplitz(){
            delete []a;
        }
        void set(int i,int j,int k);
        int get(int i,int j);
        void display();
};

void tioplitz::set(int i,int j,int k){
    if(i<=j)
        a[j-i]=k;
    else
        a[n+(i-j-1)]=k;
}

int tioplitz::get(int i,int j){
    if(i<=j)
        return a[i-j];
    else
        return a[n+(i-j-1)];    
}

void tioplitz::display(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if (i<=j)
                cout<<a[j-i]<<" ";
            else 
                cout<<a[n+(i-j-1)]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int d,x;
    cout<<"enter dimention ";
    cin>>d;
    tioplitz dm(d);
    for(int i=1;i<=d;i++){
        for(int j=1;j<=d;j++){
            cin>>x;
            dm.set(i,j,x);
        }
    }
    cout<<"\n"<<dm.get(1,1);
    dm.display();
    return 0;
}