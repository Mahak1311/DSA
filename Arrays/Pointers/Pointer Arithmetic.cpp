//operatings on pointers
#include<iostream>
using namespace std;

int main(){
    int a=10;
    int* ptr=&a;

    cout<<ptr<<endl;

    ptr++; //Increments by 1 integer which means 4 bytes
    cout<<ptr<<endl;

    ptr=ptr+2; //adds 2 integer means increases 8 bytes
    cout<<ptr<<endl;

    ptr--; //decrements by 1 integers means decreases 4 bytes
    cout<<ptr<<endl;

    ptr=ptr-3; //subtracts 3 integer means decreases 12 bytes
    cout<<ptr<<endl;

    
return 0;

}