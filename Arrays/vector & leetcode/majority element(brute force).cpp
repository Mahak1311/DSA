/*To return element which is present in array covering more than n/2 space*/
#include<iostream>
#include<vector>
using namespace std;
vector<int>nums={1,2,2,1,1};

int major(vector<int>&nums){
    int n=nums.size();
    for(int val:nums){
       int freq=0;

       for(int el:nums){
        if(el==val){
            freq++;
        }
       }
       if(freq>n/2){
        return val;
       }
    }
    return -1;
}
int main() {
    vector<int> nums = {1,2,2,1,1};

    cout << major(nums);

    return 0;
}