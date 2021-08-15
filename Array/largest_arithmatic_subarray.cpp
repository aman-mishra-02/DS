#include <iostream>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    int A[n];
    
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    int diff=A[1]-A[0];
    int ans=2;
    int cl=2;
    for(int j=2;j<n;j++){
        if(A[j]-A[j-1]==diff){
            cl++;
        }
        else{
            diff=A[j]-A[j-1];
        }
        ans=max(ans,cl);
    } 
    cout<<ans;
    return 0;
}
