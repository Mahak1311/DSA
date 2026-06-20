/*Bitwise Operations:
&  (AND)  : 1 if both bits are 1
|  (OR)   : 1 if at least one bit is 1
^  (XOR)  : 1 if bits are different
<< (Left Shift)  : Shifts bits left by n places (Equivalent to multiplying by 2ⁿ)
>> (Right Shift) : Shifts bits right by n places (Equivalent to dividing by 2ⁿ)
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,m;
    string o;
    cout<<"Enter number 1: ";
    cin>>n;
    cout<<"Enter number 2: ";
    cin>>m;
    cout<<"Enter operation to perform: ";
    cin>>o;

    if(o=="&")
      {
    cout<<"The Bitwise And(&) operation between two numbers is "<< (n & m)<<endl;
     } 

    else if(o=="|"){
        cout<<"The Bitwise Or(|) operation between two numbers is "<< (n | m)<<endl;
    }
    else if(o=="^"){
        cout<<"The Bitwise XOR(^) operation between two numbers is "<< (n ^ m)<<endl;
        }
    else if(o=="<<"){
        cout<<"The Bitwise Left shift(<<) operation between two numbers is "<< (n << m)<<endl;
     }
    else if(o== ">>"){
        cout<<"The Bitwise Right shift(>>) operation between two numbers is "<< (n >> m)<<endl;
    }
    else{
        cout<<"Invalid Bitwise Operation!";
    }
    
    return 0;
      
}