//uppercase to lowercase and lowercase to uppercase

#include <iostream>
#include <algorithm> 
#include <string> 
using namespace std;

int main(){

    string s="abcdefghijklmnopqrstuvwxyz";
    string s1="AbCdEfGhIjKlMnOpQrStUvWxYz";

//lower to upper 
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z')
        s[i]=s[i]-32;
    }
    cout <<s<<endl;

//upper to lower
     for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]+32;
    }
    cout <<s<<endl;

//upper to lower and lower to upper in same string
        
     for(int i=0;i<s1.length();i++){
        
        if(s1[i]>='A' && s1[i]<='Z')
            s1[i]=s1[i]+32;
        else
            s1[i]=s1[i]-32;
    }
    cout<<s1<<endl;

//inbuilt transform funtion in algorithm library
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;

    return 0;
}