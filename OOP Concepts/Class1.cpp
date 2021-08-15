#include <iostream>
using namespace std;

class student{
    public:
        string name;
        int age;                // name age and gender DATA MAMBERS;
        char gender;

        student(){
            ;
        }// default constructor;

        student(string s,int a,char c){
            name=s;
            age=a;
            gender=c;
        }// parameterised constructor;

        student(student &a){
            name=a.name;
            age=a.age;
            gender=a.gender;
        }// copy consructor;

        ~student(){

        }// destructor;

        void print(){           // print() member funtiom;
            cout<<"NAME is "<<name<<endl;
            cout<<"Age is "<<age<<endl;            
            cout<<"Gender is "<<gender<<endl;
        }
};

int main(){
    student a;     //a==object , assigned by '. operator';
    a.name='AMAN';
    a.age=20;
    a.gender='M';
    student b("clark",10,'m');
    a.print();
    b.print();
    student c=a;
}