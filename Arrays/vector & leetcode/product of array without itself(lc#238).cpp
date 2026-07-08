//More optimal solution for product of array without itself but this only gives time complexity O(n) but space complixity isn't O(1)
#include<iostream>
#include<vector>
using namespace std;

vector<int>product(vector<int>&nums){
    int n=nums.size();
    vector<int>prefix(n,1); //vector<int>name(size,initial_value)-syntax
    vector<int>suffix(n,1);
    vector<int>ans(n);

    for(int i=1;i<n;i++){ //starts with i =1 coz there is no prefix for nums[0]
       prefix[i]=prefix[i-1]*nums[i-1]; //basically we are multiplying the number before i in prefix's array with number before i in nums array "Open notes"
    }
    for(int i=n-2;i>=0;i--){ //reverse array: n=4 as at i=3 there would be no suffix so start with i=2
      suffix[i]=suffix[i+1]*nums[i+1]; //+ instead of - coz this is a reverse array
    }
    for(int i=0;i<n;i++){
        ans[i]=prefix[i]*suffix[i];
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