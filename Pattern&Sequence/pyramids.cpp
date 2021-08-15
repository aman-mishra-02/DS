#include<iostream>
using namespace std;

 main() {
    int i,j,n;
    cin>>n;

    cout<<endl<<"pattern 1 "<<endl<<endl;

    for( i=n;i>=1;i--){
        for( j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    } 

    cout<<endl<<"pattern 2 "<<endl<<endl;

    for( i=n;i>=1;i--){
        for( j=1;j<=i;j++){
            if(i==n||j==1||i==j){
                cout<<"* ";
            } 
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    cout<<endl<<"pattern 3 "<<endl<<endl;

    for( i=1;i<=n;i++){
        for( j=1;j<=n;j++){
            if(j<=n-i){
                cout<<"  ";
            } 
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    
    cout<<endl<<"pattern 4 "<<endl<<endl;

    for( i=1;i<=n;i++){
        for( j=1;j<=n;j++){
            if(j<=n-i){
                cout<<"  ";
            } 
            else if(j==n||i==n||i+j==n+1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    cout<<endl<<"pattern 5 'RHOMBUS' "<<endl<<endl;
    
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(j=1;j<=(2*i)-1;j++){
            cout<<" *";
        }
        cout<<endl;
    }
       for(i=n-1;i>=1;i--){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(j=1;j<=(2*i)-1;j++){
            cout<<" *";
        }
        cout<<endl;
    }
    
    return 0;
}
