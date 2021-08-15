
// index of first repeting no; 

#include <iostream>
#include <climits>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    int A[n];
    
    for(i=0;i<n;i++){
        cin>>A[i];
    }

    const int N = 10e6+5;
    int idx[N];
    int minidx=INT_MAX;
    for(int j=0;j<N;j++){
        idx[j]=-1;
    }
    for(int j=0;j<n;j++){
        if(idx[A[j]] != -1){
            minidx=min(idx[A[j]],minidx);
        }
        else{
            idx[A[i]]=i;
        }
    }
    if(minidx == INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx + 1<<endl;
    }
    return 0;
}
