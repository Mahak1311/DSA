/*to convert binary into decimal
Logic:
Multiply each binary digit by its corresponding power of 2 and add the results.

Example:
1011₂

= (1×2³) + (0×2²) + (1×2¹) + (1×2⁰)
= 8 + 0 + 2 + 1
= 11₁₀
Shortcut: Start from the right and assign powers of 2 → 2⁰, 2¹, 2², 2³, ... then add the values where the bit is 1.*/
#include <iostream>
using namespace std;

int bintodec(int binnum){
    int ans=0;
    int pow=1;

    while(binnum>0){
        int rem= binnum%10;//remainder after dividing by 10
        ans+=rem*pow;//ex (1×2³) + (0×2²) + (1×2¹) + (1×2⁰)  

        binnum /=10;//keep dividing by 10
        pow*=2;//keep multiplying previous power of 2 with 2

    }
    return ans;

}
int main(){
    int binnum;
    cout<<"Enter value: ";
    cin>>binnum;
    cout<<"The converted value is: "<<bintodec(binnum)<<endl;

return 0;    
}