// public:-
//     objects can access these members from both inside and outside the class;
// private:-
//     objects cannot access thesse members outside the class;
//     these memmbers can only be accessed inside class;
// protected:-
//     objects cannot access thesse members outside the class;
//     these memmbers can only be accessed inside class and in derived class;

#include <iostream>
using namespace std;

class A{
    public: 
        int a;
        void funcA(){
            cout<<"Func A \n";
        }
    private:
        int b;
        void funcB(){
            cout<<"Func B \n";
        }
    protected:
        int c;
        void funcC(){
            cout<<"Func C \n";
        }
};

int main(){
    A a;
    a.funcA();
    // a.funcB();
    // a.funcC();           //funcB(), funcC() cannot be accessed ;
    return 0;
}