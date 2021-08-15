// array should be pre-sorted

#include <iostream>
using namespace std;

int search(int A[],int n, int k){
    int s=0,e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(A[mid]==k){
            return mid;
        }
        else if(A[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
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
