#include <iostream>
using namespace std;

/*           e^x=1+(x/1)+(x^2/2!)+..........       */
double e(int x,int n){
    static double p=1,f=1;
    double s;
    
    if (n==0)
        return 1;

   
    s=e(x,n-1);
    p=p*x;
    f=f*n;

    return s + p/f;
}

/*----------------------------------HORNERS RULE--------------------------------------------
                   e^x=1+(x/1)[1+(x/2)[1+(x/3)[1+(x/4)...........]]] 
*/

double e2(int x,int n){
    static double s;
    
    if (n==0)
        return s;

   
    s=1+x*s/n;

    return e2(x,n-1);
}


int main(){
    int a,b;
    cin>>a>>b;
    cout<<"e raise to "<<a<<" upto "<<b<<" terms is "<<e2(a,b);
}