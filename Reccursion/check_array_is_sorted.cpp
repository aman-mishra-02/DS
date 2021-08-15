#include<iostream>
using namespace std;

bool ifsorted(int a[],int n){
    
    if(n==1)
        return true;
    
    bool rest=ifsorted(a+1,n-1);
    
    return (a[0]<a[1] && rest);
    
       
}

int main() {
    int a[]={2,3,6,9,7};
    cout<<ifsorted(a,5)<<endl;

    return 0;
}