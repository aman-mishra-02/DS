#include <iostream>
using namespace std;

void ToH(int n,int a,int b,int c){
    ToH(n-1,a,c,b);
    cout<<a<<","<<c<<endl;
    ToH(n-1,b,a,c);
}

int main(){
    ToH(4,1,2,3);
    return 0;
}