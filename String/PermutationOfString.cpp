// #include <iostream>
// #include<string>
// #include<algorithm> 
#include <bits/stdc++.h>
using namespace std;

// void Permutation(char s[],int k){
//     static int A[10]={0};
//     static char res[10];
//     int i;
//     if(s[k]=='\0'){
//         res[k]='\0';
//         cout<<res;
//     }
//     else{
//          for(i=0;s[i]!='\0';i++){
//             if(A[i]==0){
//                 res[k]==s[i];
//                 A[i]=1;
//                 Permutation(s,k+1);
//                 A[i]=0;
//             }     
//         }
//     }
// }



void perm(string s,int l, int h){
     if(l==h)
        cout<< s<<endl;
    else{
         for(int i=l;i<=h;i++){
            swap(s[l],s[i]); 
            perm(s,l+1,h);
            swap(s[l],s[i]); 
        }
    }
}

int main(){
    string s="abc";
    // cin.getline(s,10);
    //Permutation(s,0);
    perm(s,0,s.size()-1);
    return 0;
}