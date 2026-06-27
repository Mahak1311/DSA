/*Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. 
Find the two elements that appear only once. You can return the answer in any order.
You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.*/
#include<iostream>
#include<vector>
using namespace std;
vector<int>nums={1,2,1,3,2,5};
vector<int> singleNumber(vector<int>& nums) {

        int ans = 0;

        for(int val : nums) {
            ans ^= val;
        }

        int rightMostSetBit = ans & (-ans);

        int num1 = 0;
        int num2 = 0;

        for(int val : nums) {

            if(val & rightMostSetBit) {
                num1 ^= val;
            }
            else {
                num2 ^= val;
            }
        }

        return {num1, num2};
    }   
int main(){
    vector<int> ans = singleNumber(nums);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;   
}