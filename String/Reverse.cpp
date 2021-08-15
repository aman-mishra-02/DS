#include <iostream>
#include <string>
using namespace std;
void swap(char *a,char *b){
    char temp=*a;
    *a=*b;
    *b=temp;
}
void reverse(string s){
    if(s.length()==0)
        return;                                                                 
                                                     // Using Recursion   
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}


int main(){
    int i,j;
    string s;
    getline(cin,s);
    for(i=0,j=s.length()-1;i<j;i++,j--){
        swap(&s[i],&s[j]);
    }
    cout<<s<<endl;

    reverse(s);

    return 0;
}
