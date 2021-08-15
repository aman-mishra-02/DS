#include<iostream>
using namespace std;

 main() {
    int i,j,n;
    cin>>n;

    cout<<endl<<"pattern 1 "<<endl<<endl;

    for( i=1;i<=n;i++){
        for( j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    } 

    cout<<endl<<"pattern 2 ' FLOYD'S TRIANGLE ' "<<endl<<endl;
    int COUNT=1;
    for( i=1;i<=n;i++){
        for( j=1;j<=i;j++){
            cout<<COUNT<<" ";
            COUNT++;
        }
        cout<<endl;
    } 
    return 0;
}