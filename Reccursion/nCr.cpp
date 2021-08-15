#include <iostream>
using namespace std;

/*------------------------finding nCr using reccursion by pascal triangle--------------------------------

                                            1                                                          
                                        1       1                                                      
                                    1       2       1
                                1       3       3       1
                            1       4       6       4       1    

-------------------------------------------------------------------------------------------------------*/

double nCr(int n,int r){
    if(r==0||n==r)
        return 1;
 
    return nCr(n-1,r-1)+nCr(n-1,r);
}

int main(){
    int n,r;
    cin>>n>>r;
    cout<<n<<"C"<<r<<" = "<<nCr(n,r);
}