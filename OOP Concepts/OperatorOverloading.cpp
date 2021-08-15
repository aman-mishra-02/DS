#include <iostream>
using namespace std;

class complex{
    private:
        int r;
        int i;

    public:
        complex(){
            r = 0;
            i = 0;
        }

        complex(int r,int i){
            this->r=r;
            this->i=i;
        }

        ~complex(){

        }

        complex operator +(complex c){                        //operator overloading;
            complex temp;
            temp.r=r+c.r;
            temp.i=i+c.i;
            return temp;
        } 

        void print(){
            cout<<r<<" + i"<<i<<endl;
        }
};

int main(){
    complex c1(5,4),c2(3,2),c3;
    c3=c1+c2;   
    c3.print();
    return 0;
}