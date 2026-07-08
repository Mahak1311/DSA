// Pass by refernce doesn't create a copy just uses original 
#include<iostream>
using namespace std;

void makechange(int a){ //pass by value
   a=100;
}
void change(int* b){ //pass by reference using pointers
    *b=170;
}
void ChangeA(int &c){ //pass by refernce using alias
     c=20;
}
int main(){
    int a =200; 
    makechange(a);
    cout<<"Inside main function: "<<a<<endl; //prints 200 as pass of value is used

    int b=380;
    change(&b);
    cout<<"inside main function: "<<b<<endl; //prints 170 as pass by refernce is used using pointer 

    int d=30;
    ChangeA(d);
    cout<<"inside main function: "<<d<<endl;

return 0;
}