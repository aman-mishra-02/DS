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
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
           
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    } 

    return 0;
}