#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++){
        cin>>A[i];
        cout<<"A["<<i<<"] = "<<A[i]<<endl;
    }
    int maxno=A[0]; // maxno=INT_MIN;
    int minno=A[0]; // minno=INT_MAX;
    for(int i=0;i<n;i++){
       maxno=max(maxno,A[i]);
       minno=min(minno,A[i]);
    }
    cout<<maxno<<" "<<minno<<endl;
    return 0;
}
