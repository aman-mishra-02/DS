#include<iostream>
using namespace std;

// excessive reccursion 

/*int fibonacci(int n){         
    if (n==0)                                          
        return 0;
    if (n==1)
        return 1;
    
    return fibonacci(n-1)  + fibonacci(n-2);
}*/

//-------------------memoisation (storing values of function calls to reduse operating time)--------------------

int F[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
int fib(int n)
{
    if(n<=1)
    {
        F[n]==n;
        return n;
    }
    else 
    {
        if(F[n-2]==-1)
            F[n-2]=fib(n-2);
        if(F[n-1]==-1)
            F[n-1]=fib(n-1);   
    }
    F[n]=F[n-2]+F[n-1];
    return F[n-1]+F[n-2];

}

int main() {
    int n;
    cin>>n;
    cout<<fib(n)<<endl;
    return 0;
}