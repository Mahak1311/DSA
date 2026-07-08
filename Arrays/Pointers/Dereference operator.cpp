//Derefernce operator(*) gives value stored at address of any said variable
#include<iostream>
using namespace std;

int main(){
    int a=150;
    int* ptr=&a;
    int** parentptr=&ptr;

    cout<<a<<endl; //150
    cout<<ptr<<endl; //address of a
    cout<<parentptr<<endl;//address of ptr
    cout<<*(&a)<<endl; //value of a
    cout<<*(&ptr)<<endl; //value stored at pointer which stores address of a
    cout<<*(&parentptr)<<endl; //value stored at paret pointer which stores address of pointer
    cout<<*(ptr)<<endl; //pointer's address' value
    cout<<*(parentptr)<<endl;//value of parent pointer which is pointer's address

    return 0;
}