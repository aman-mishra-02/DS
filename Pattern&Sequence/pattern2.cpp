#include<iostream>
using namespace std;

 main() {
    int i,j,n;
    cin>>n;

    for( i=1;i<=n;i++){
         for(j=1;j<=n+1-i;j++){
            cout<<" ";
        }
        for( j=1;j<=i;j++){
            cout<<" "<<i-j+1;
        }
        cout<<endl;
    }
    return 0;
}