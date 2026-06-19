#include<iostream>
using namespace std;

int main(){
    int a,b;
    
       cout << "Enter the value of a: ";
          cin >> a;
       cout << "Enter the value of b: ";
          cin >> b;
          int sum = a +b;
          int mul = a * b;
           int div = a/b;
           int sub = a - b;
        cout <<"the Addition is: \n " << sum << endl ;
        cout << "The Multiplication is: \n " << mul << endl;
        cout << "The Division is: \n " << div << endl;
        cout << "The Subtraction is: \n " << sub << endl; 
        return 0;
}