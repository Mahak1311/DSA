/*To print the sum of digits of a number
for example: 145670
the sume would be:1 + 4 + 5 + 6 + 7 + 0=23*/

#include <iostream>
using namespace std;

int sumdig(int n){
    int sum = 0;
    int num = n;

while(num > 0){
    int lastdigit = num % 10; //gets last digit of number
    num /=10; //removes last digit of number
    sum += lastdigit; //adds removed last digit to the sum
    }
return sum;

}

int main(){
    int n;
    cout<< "Enter the Number: ";
    cin>>n;
    cout<<"The sum of digits is: " <<sumdig(n);

return 0; 

}