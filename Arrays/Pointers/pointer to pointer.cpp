//storing address of a pointer to another pointer
#include<iostream>
using namespace std;

int main(){
    int a=100;
    int* ptr=&a;
    int** parentptr=&ptr; //  ** used to store address of pointer to another pointer

    cout<<ptr<<endl;
    cout<<parentptr<<endl;

    return 0;
}