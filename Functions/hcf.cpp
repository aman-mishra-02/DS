#include<iostream>
using namespace std;

// hcf of two no by euclid's division lemma;
int hcf(int a,int b){
    int t;
    while(b!=0){
        t=a%b;
        a=b;
        b=t;
    }
    return a;
}
int main() {
    int a,b;
    cin >>a>>b;
    cout <<hcf(a,b)<<endl;
    return 0;
}