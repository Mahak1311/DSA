/*Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
example:Input: nums = [4,1,2,1,2]
Output: 4*/
#include<iostream>
#include<vector>
using namespace std;
vector<int>nums={4,1,2,1,2};
int singlenum(vector<int>& nums){
    int ans =0;
    for(int val:nums){
        ans=ans^val;//XOr(^) cancels similar number so it will cancel both 1 and 2 with themselves and 4^0=4
    }
    return ans;
}

int main(){
    int ans = singlenum(nums);
    cout<<"The single number is: "<< ans;

return 0;    
} 