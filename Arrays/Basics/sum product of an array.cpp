/*To calculate sum and product of all numbers in an array
Need to give back a value? → int, float, char, etc.
Need to just perform a task? → void
main() is a special function and usually returns 0.*/
#include<iostream>
using namespace std;

void calculate(int arr[],int sz){
    int sum=0;
    int product=1;
    for(int i=0;i<sz;i++){
        sum+=arr[i];
        product*=arr[i];

    }
    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int sz = 5;

    calculate(arr, sz);

return 0;    
}