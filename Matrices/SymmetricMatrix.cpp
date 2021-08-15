#include<iostream>
using namespace std;

class symmetric{
    private:
        int *a;
        int n;
    public:
        symmetric(){
            n=2;
            a=new int[2];
        }
        symmetric(int n){
            this->n=n;           //this->n(class n)=n(local parameter)  
            a=new int[n*(n+1)/2];
        }

        ~symmetric(){
            delete []a;
        }

        void set(int i,int j,int k);
        int get(int i, int j);
        void display();

};

void symmetric::set(int i,int j,int k){
    if(i>=j){
        a[n*(j-1)+((j-2)*(j-1)/2)+i-j]=k;
    }
}

int symmetric::get(int i,int j){
    if(i>j)
        return a[n*(j-1)+((j-2)*(j-1)/2)+i-j];
    else if (i=j)
        return a[n*(j-1)+((j-2)*(j-1)/2)+i-j];
    else 
        return a[n*(i-1)+((i-2)*(i-1)/2)+j-i];
}

void symmetric::display(){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i>=j)
                cout<<a[n*(j-1)+((j-2)*(j-1)/2)+i-j]<<" ";
            else
                cout<<a[n*(i-1)+((i-2)*(i-1)/2)+j-i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int d,x;
    cout<<"enter dimention ";
    cin>>d;
    symmetric dm(d);
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