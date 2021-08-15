#include <iostream>
#include<string>
#include<algorithm> 
using namespace std;

bool IsAnagram(string a,string b){
    
     bool check=1;

    if(a.length()!=b.length())
        return 0;

    else{
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[i]){
                check=0;
            }
        }
    return check;     
    }
}

int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    if(IsAnagram(a,b))
        cout<<a<<" and "<<b<<" are anagram ";
    else
        cout<<a<<" and "<<b<<" are not anagram ";
    return 0;

}
    