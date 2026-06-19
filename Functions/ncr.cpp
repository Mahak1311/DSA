/*To print answer of nCr
where formula: n!/(r! * (n-r)! )*/
#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;

  for(int i=1;i<=n;i++){
    fact *= i;
  }
    return fact;
}
int nCr(int n,int r){
    int factorial_n= factorial(n);
    int factorial_r= factorial(r);
    int factorial_nmr= factorial(n-r);

    return factorial_n/(factorial_r*factorial_nmr);
}
int main(){
        int n;
        int r;
        cout<<"Enter the value of n: ";
        cin>>n;
        cout<<"Enter the value of r: ";
        cin>>r;
        cout<<"The Answer is: " <<nCr(n,r);
return 0;
        
}
