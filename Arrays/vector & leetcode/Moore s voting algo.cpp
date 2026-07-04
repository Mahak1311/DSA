/*voting algo tells that we can do freq++ when same element appears and freq-- when diff element appears
because if the element is in majority then no matter how much - or + occurs at the end that element will be the one remaining*/
#include<iostream>
#include<vector>
using namespace std;

int major(vector<int>&nums){
    int freq=0;
    int ans=0;
    for(int i=0;i<nums.size();i++){
        if(freq==0){
            ans=nums[i];
        }
        if(ans==nums[i]){
           freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}
int main(){
    vector<int>nums={1,2,2,1,1};
    cout<<major(nums);
    
return 0;
}