/* Printing all elements of array without using loop*/
#include<iostream>
using namespace std;

int main(){
    int marks[5] = {99,97,84,35,20}; //array of size 5 created and elements inserted
    marks[0]=100;//element at 0 index is updated to 100
    cout<<"The fisrt element at zeroth index is: " <<marks[0] <<endl;
    cout<<"The second element at first index is: " <<marks[1] <<endl;
    cout<<"The third element at second index is: " <<marks[2] <<endl;
    cout<<"The fourth element at third index is: " <<marks[3] <<endl;
    cout<<"The fifth element at fourth index is: " <<marks[4] <<endl;
return 0;
}