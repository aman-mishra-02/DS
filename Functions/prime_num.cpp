#include<iostream>
using namespace std;

// print prime numbers in range [1,n] by sieve of erathosthenes 
void prime(int n){
    int s[n]={0};
    for (int i=2;i<n;i++){
        if (s[i]==0){
            for(int j=i*i;j<n;j=j+i){
                s[j]=1;
            }
        }
    }
    for(int i=2;i<n;i++){
        if (s[i]==0){
            cout<<i<<" ";
        }
    }
}
int main() {
    int n;
    cin >>n;
    prime(n);
    return 0;
}