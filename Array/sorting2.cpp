                        //bubble sort (swap two consecutive element if in wrong order repete till sorted)
#include <iostream>
using namespace std;

void sort(int A[],int n){
    int counter=1;
    while (counter<n)
    {
        for(int i=0;i<n-counter;i++){
            if(A[i]>A[i+1]){
                int t=A[i+1];
                A[i+1]=A[i];
                A[i]=t;
            }
        }
        counter++;
    }
    
   for(int k=0;k<n;k++){
       cout<<" "<<A[k];
   }
}
int main(){
    int i,n,key;
    cin>>n;
    int A[n];
   
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"sorted Array ";
    sort(A,n);

    return 0;
}