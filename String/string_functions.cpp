#include <iostream>
#include <string> 
#include <algorithm>  //in built sort function
using namespace std;
int main(){
//  append
    string st1,st2;
    st1="am";
    st2="an";
    cout<<st1+st2<<endl;
    st1.append(st2);
    cout<<st1<<endl;

// clear
    string a="aman mishra";
    cout <<a<<endl;
    a.clear();
    cout <<a<<endl;

//empty
    string str ="abc";
    cout<<str<<endl;
    str.clear();
    if(str.empty()){
        cout<<"string is empty "<<endl;
    }

//compare
    string s1="abc",s2="abc";
    cout<<s1.compare(s2)<<endl;

//erase
    string str2="peekaboo";
    str2.erase(1,5);
    cout<<str2<<endl;

//find
    string str1="bhaibro";
    cout<<str1.find("bro")<<endl;

//insert
    str1.insert(4,"yep");
    cout<<str1<<endl;

//size,length
    cout<<str1.size()<<" "<<str1.length()<<endl;

//sub string
    string s=str1.substr(0,4);
    cout<<s<<endl;

//string to integer
    string s3="123";
    int x=stoi(s3);
    cout<<s3<<" + 123 ="<<x+123<<endl;

//integer to string
    int y=786;
    cout<<to_string(y) + "2"<<endl;

//sort
    string s4="zyxabc";
    sort(s4.begin(),s4.end());
    cout<<s4<<endl;
    return 0;
}