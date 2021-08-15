#include<iostream>
using namespace std;
/*PRIME NUMBER*/
int main() {
    int n,i;
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"not a prime number"<<endl;
            break;
        }
    }
    if(i!=n){
        cout<<"divisible by "<<i<<endl;
    }
    else if(i==n){
        cout<<"PRIME"<<endl;
    }
    return 0;
}
