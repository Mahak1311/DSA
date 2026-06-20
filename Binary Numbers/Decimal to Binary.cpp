/*To convert a number from decimal to Binary
Decimal (Base 10) → Digits 0–9 (used in daily life)
Binary (Base 2) → Digits 0, 1 (used by computers)
Octal (Base 8) → Digits 0–7
Hexadecimal (Base 16) → Digits 0–9, A–F 
To convert decimal to binary the number should be repeatdly divided by 2 and the remainder like 0 or 1 will be the answer*/
#include <iostream>
using namespace std;

int dectobinary(int decnum){
    int ans=0;
    int pow=1; //power which will keep increasing 10^0 then 10^1 then 10^2 so on...

    while(decnum>0){
        int rem=decnum%2; //to find remainder
        decnum/=2; //to divide further
        ans+=(rem*pow); //to multiply the remainder and power [for ex: rem is 1 then 1*10^0 as 1 would be in first place] then add it to answer
        pow*=10;//keep multiplying 10 with the power previously used

    }
    return ans;
}
int main(){
    int decnum;
    cout<<"Enter value: ";
    cin>> decnum;
    cout<<"The value in binary is: " <<dectobinary(decnum) <<endl;

return 0;    
}