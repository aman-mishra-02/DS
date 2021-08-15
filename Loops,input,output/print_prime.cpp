#include<iostream>
using namespace std;
/*PRINT PRIME IN GINEN RANGE*/
int main() {
    int a,b,i,j;
    cin>>a>>b;
    cout<<"prime numbers between "<<a<<" and "<<b<<" are "<<endl;
    for(i=a;i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<endl;
        }
    }
    return 0;
}
