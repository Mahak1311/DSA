#include<iostream>
using namespace std;
int main(){
    int numbers = 12345;
    int revNumbers = 0;
    
    while (numbers){
        revNumbers = revNumbers * 10 + numbers % 10;
        numbers /= 10;
    }
    cout << "Reversed Numbers:" << revNumbers << "\n";
    return 0;
}