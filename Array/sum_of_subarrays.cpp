#include <iostream>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    int A[n];
    
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    for(int j=0;j<n;j++){
        int sum=0;
        for(int k=j;k<n;k++){
            sum+=A[k];
            cout<<sum<<endl; 
        }
    }
    return 0;
}