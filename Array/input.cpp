#include <iostream>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    int A[n];
    
    for(i=0;i<n;i++){
        cin>>A[i];
        cout<<"A["<<i<<"] = "<<A[i]<<endl;
    }
    return 0;
}
