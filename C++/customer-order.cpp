#include<iostream>
using namespace std;
int main(){
    int choice =2;
    switch (choice)
    {
    case 1:
        cout << "You have ordered coffee!";
        break;
    case 2:
        cout << "You have ordered tea";
        break;
    default:
        cout << "Invalid order!";
        break;
    }
 return 0;
}