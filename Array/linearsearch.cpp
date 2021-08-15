#include <iostream>
using namespace std;

int search(int A[],int n, int k){
    for(int i=0;i<n;i++){
        if(A[i]==k)
            return i;
    }
    return -1;
}
int main(){
    int i,n,key;
    cin>>n;
    int A[n];
   
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    cin>>key;
    cout<<search(A,n,key)<<endl;

    return 0;
}
