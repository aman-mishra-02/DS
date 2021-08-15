#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int vcount=0,ccount=0,wcount=1,spcount=0,numcount=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
            vcount++;
        }
        else if((s[i]>=65 && s[i]<=90)||(s[i]>=97 && s[i]<=122)){
            ccount++;
        }
    }
    for(int i=0;i<s.length();i++){
        if(s[i]==' ' && s[i-1]!=' ' /* && s[i+1]!='\0' */)
            wcount++;
    }
    cout<<"Vovel Count == "<<vcount<<endl;
    cout<<"Consonent Count == "<<ccount<<endl;
    cout<<"Word Count == "<<wcount<<endl;

    return 0;
}