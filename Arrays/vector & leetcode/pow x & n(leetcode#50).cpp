/*to compute x^n with binary exponential*/
#include<iostream>
#include<vector>
using namespace std;

double pow(double x,int n){
    long binform=n;
    if(binform<0){
        x=1/x; //to make binform positive
    }
    double ans =1;

    while(binform>0){ //binform such as 3=101
        if(binform%2==1){
            ans*=x;
        }
     x*=x;
     binform /=2;
    }
    return ans;
}
int main(){
    double x =3;
    int n=5;
    double ans=1;
    long binform=n;
    cout<<pow(x, n);
return 0;
}