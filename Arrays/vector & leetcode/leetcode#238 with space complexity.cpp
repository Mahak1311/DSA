//we did brute force which was O(n^2) and optimal which gave us O(n) but space complexity was not better
#include<iostream>
#include<vector>
using namespace std;

vector<int>product(vector<int>&nums){
    int n=nums.size();

    vector<int>ans(n,1);

    for(int i=1;i<n;i++){
        ans[i]=ans[i-1]*nums[i-1]; //prefix and suffix were taking extra space so why not just store both of them in the final answer
    }
int suffix=1;
    for(int i=n-1;i>=0;i--){
        ans[i]*=suffix;
        suffix*=nums[i];
    }
    return ans;
}
int main(){
    vector<int>nums={1,2,3,4};
    vector<int>res=product(nums);
    for(int i=0;i<nums.size();i++){
      cout<<res[i]<<" ";
    }
    return 0;
}