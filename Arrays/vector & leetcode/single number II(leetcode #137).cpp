/*Now numbers are repeated 3 times and to find single num*/
#include<iostream>
#include<vector>
using namespace std;

vector<int>nums={0,1,0,1,0,1,99};
int singlenum(vector<int>&nums){
    int ans=0;
    for(int i=0;i<32;i++){ //to check every bit as int has 32 bits
       int count = 0; //count 0 is set to zero to store counts
       for(int val:nums){ 
        if((val>>i) & 1){ //if value is shifted right by i digit to check i column and AND operation with 1 is performed and if gives value 1
            count++; //then increase count if bit is On
        }
       }
       if(count%3!=0){ //if count is divided by 3 and remainder is 0
            ans |=(1<<i); //1 is left shifted with i digits and OR operation is performed
       }
    }
    return ans;
}

int main(){
    vector<int>nums={0,1,0,1,0,1,99};
    int ans=singlenum(nums);
    cout<<"The single number is: "<<ans<<endl;
   
return 0;  
}

