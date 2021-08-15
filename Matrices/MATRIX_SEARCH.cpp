#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int a[n1][n2];

    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
              cin>>a[i][j];
        }
    }
    int found=0;
    int key;
    cin>>key;
/*     // unsorted O(n1n2)
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
              if(a[i][j]==key){
                found=1;
                break;
            }
        }
    }
*/
    // sorted 
    int r=0,c=n1-1;
    while(1){
        if(a[r][c]==key){
            found=1;
            break;
        }
        else if(a[r][c]<key){
            r++;
        }
        else{
            c--;
        }
    }

    if(found==1)
    cout<<"Element is found "<<endl;
    else
    cout<<"Element is not found "<<endl;
    return 0;
}