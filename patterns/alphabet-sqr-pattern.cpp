/* To Print
A B C D
A B C D
A B C D
A B C D 
In ASCII alphabets are represented by number for example
A=65
B=66 etc
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    for(int i=0; i<n;i++)
    {
      char ch='A';
      for(int j=0;j<n;j++) {
      cout << ch;
       ch++;
      }
      cout<< endl;
     
    }

return 0;
}