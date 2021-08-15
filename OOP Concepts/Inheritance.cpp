// inheritance 
//     inherit attributes and members from one class to another;
// derived class (child)  base class (parent);
// TYPES :-
//      SINGLELEVEL
//      MILTILEVEL
//      ....



#include <iostream>
using namespace std;

class A{
    public: 
        void funcA(){
            cout<<"Func A \n";
        }
    private:
        void funcB(){
            cout<<"Func B \n";
        }
    protected:
        void funcC(){
            cout<<"Func C \n";
        }
};
class B : public A{
    public:
        void Bfunc(){
            funcC();          // ACCESSING PROTECTED MEMBER OF CLASS A IN INHERITED CLASS B;
        }
};

int main(){
    A a;
    B b;
    b.funcA();
    b.Bfunc();
    return 0;
}