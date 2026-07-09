/*Binary search is more optimal than linear search. Time complexity is O(Logn) as instead of searching every single element 
In Binary search we find mid value of an array then compare it with target: If mid < target, then serach right else left*/
#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>& arr,int target){
    int st=0;
    int end=arr.size()-1;
    
    while(st<=end){
      int mid=(st+end)/2;

        if(target<arr[mid]){

            end=mid-1;
        }
         else if(arr[mid]<target){

            st=mid+1;
        }
        else{
            return mid;
        }

    }
    return -1;
}
int main(){
    vector<int>arr={-1,0,3,4,5,9,12};
    int target=12;
    cout<<binarysearch(arr,target)<<endl;
    vector<int>arr1={0,3,4,9,12};
    int target1=6;
    cout<<binarysearch(arr1,target1)<<endl;
   
return 0;    
}