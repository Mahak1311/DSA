//Null pointer return "Null" instead of fake address to let user know that pointer stores nothing
#include<iostream>
using namespace std;

int main(){
    int* ptr;
    cout<<"Before null pointer the answer is: "<<ptr<<endl;
    int* ptr2=NULL;
    cout<<"After using Null pointer: "<<ptr2<<endl;
    int* ptr3=NULL;
    cout<<*ptr3<<endl; //Can't deference null pointer
    return 0;
}