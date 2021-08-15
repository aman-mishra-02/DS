#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    char a[n+1];
    cin>>a;
    bool p=0;
   // cout << a<< endl;
   // cout <<a[n-1]<<endl;
   for(int i=0;i<=(n+1)/2;i++){
       if (a[i]==a[n-i]){p=1;}
   }
   if(p)
   cout<<" palindrome "<<endl;
   else
   cout<<" not a palindrome "<<endl;
    return 0;
}