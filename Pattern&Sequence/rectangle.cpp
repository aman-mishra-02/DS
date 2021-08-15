#include<iostream>
using namespace std;

int main() {
    int i,j;
    cin>>i>>j;
    for(int row=1;row<=i;row++){
        for(int col=1;col<=j;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
