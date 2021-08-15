                                //selection sort(swap mimimum with first element)
#include <iostream>
using namespace std;

void sort(int A[],int n){
   for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
           if(A[j]<A[i]){
               int t=A[j];
               A[j]=A[i];
               A[i]=t;
           }
       }
   }
   for(int k=0;k<n;k++){
       cout<<" "<<A[k];
   }
}
int main(){
    int i,n,key;
    cin>>n;
    int A[n];
   
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"sorted Array ";
    sort(A,n);

    return 0;
}