#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int* ptr=arr;
    int arr2[]={10,20,30,40,50};
    int* ptr2=arr2;

    cout<<*(ptr+1)<<endl; //points to next element 
    cout<<*(ptr+3)<<endl; //points to element which is after 12 bytes in address
    ptr++;
    cout<<*ptr<<endl;
    cout<<(ptr>ptr2)<<endl;

    return 0;
}