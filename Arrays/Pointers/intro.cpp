//Pointers are special variable that store address of other variable
#include<iostream>
using namespace std;

int main(){
    int a=100;
    int* ptr=&a; //*-> pointer, &-> to refer address

    float price=25.67;
    float* ptr2=&price;

    cout<<ptr<<endl;
    cout<<ptr2<<endl;

return 0;    
}