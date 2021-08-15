#include<iostream>
using namespace std;

int main() {
    int i,j;
    cin>>i>>j;
    for(int row=1;row<=i;row++){
        for(int col=1;col<=j;col++){
            if(row==1||row==i||col==1||col==j){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
