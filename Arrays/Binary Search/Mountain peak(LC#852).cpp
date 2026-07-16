//To find the peaked element in code
#include<iostream>
#include<vector>
using namespace std;

int peakvalue(vector<int>&nums) {
    int st=1; //as mid can't be indx=0 coz there won't be a prev element to check
    int end=nums.size()-2;
    while(st<=end){
        int mid=st+(end-st)/2;
          if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]){
              return mid; //if mid id peak then return peak's index
          }
          else if(nums[mid-1]<nums[mid]){ //if mid is in left side which is increasing side then the peak must be def on mid's right side and not on left
            st=mid+1;  //so for right search st becomes mid+1
          }
          else{ //similarly if mid is in dec side the peak element can't be at mid's right side
            end=mid-1; //so for left search end becomes mid-1
          }
    }
return -1;
}
int main(){
     vector<int>nums={0,3,8,9,5,2};
     
   cout<<peakvalue(nums)<<endl;

return 0;   
}