#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    ;
    
    for(int col=0;col<n;col++){
        cout<<A[0][col]<<" ";
    }
    int row_start=1,col_end=n-2;
    while(row_start<n && col_end>=1){
        cout<<A[row_start][col_end]<<" ";
        row_start++;
        col_end--;
    }
    for(int col=0;col<n;col++){
        cout<<A[n-1][col]<<" ";
    }
    return 0;
}