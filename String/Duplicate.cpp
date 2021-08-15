#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                cout<<s[i]<<endl;
                break;
            }
        }
    }
    return 0;
}
    
