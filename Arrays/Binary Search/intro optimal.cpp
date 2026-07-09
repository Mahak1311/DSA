//When finding mid we can use mid=st+(end-st)/2 instead of (st+end)/2 coz if we have huge array and both st and end are INT_MAX then it may overflow
#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>& arr,int target){
    int st=0;
    int end=arr.size()-1;

    while(st<=end){
        int mid=st+(end-st)/2;
        if(target<arr[mid]){
           end=mid-1;
        }
        else if(target>arr[mid]){
           st=mid+1;
        }
        else{
           return mid;
        }

    }
   
  return -1;  
}
int main(){
    vector<int>arr={-4,-2,0,4,6,8,9,10,11,14,16,18,20,22,26,29,30};
    int target=22;
    cout<<binarysearch(arr,target)<<endl;

return 0;    
}