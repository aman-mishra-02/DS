#include<iostream>
using namespace std;

// print prime factors of n by sieve of erathosthenes 
void factor(int n){
    int sf[n+1]={0};
    for(int i=2; i<=n;i++){
        sf[i]=i;
    }
    
    for(int i=2; i<=n;i++){
       if(sf[i]==i){
           for(int j=i*i; j<=n;j=j+i){
               if(sf[j]==j){
                   sf[j]=i;
               }
           }
       } 
    }

    while(n!=1){
        cout<<sf[n]<<" ";
        n=n/sf[n];
    }
    
}
int main() {
    int n;
    cin >>n;
    factor(n);
    return 0;
}