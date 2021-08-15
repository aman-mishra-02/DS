//insertion sort (insert an element from unsorted array to its correct position in sorted array)


#include <iostream>
using namespace std;

void sort(int A[],int n){
    for(int i=1;i<n;i++){
        int current=A[i];
        int j=i-1;
        while(A[j]>current && j>=0){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=current;    }
    
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