#include<iostream>
using namespace std;

int main() {
    int i,j,n;
    cin>>n;

    cout<<endl<<" pattern 1 "<<endl;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<" "<<j;
        }
        cout<<endl;
    }

    cout<<endl<<" pattern 2 'palindromic pattern' "<<endl;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        int k=i;
        for(;j<=n;j++){
            cout<<" "<<k--;
        }
        k=2;
        for(;j<=n+i-1;j++){
            cout<<" "<<k++;
        }
        cout<<endl;
    }
    return 0;
}