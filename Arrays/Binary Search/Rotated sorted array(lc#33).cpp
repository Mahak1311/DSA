//In Rotated sorted array the elements are in ascending order with distinct values 
#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>& arr,int target){
    int st=0;
    int end=arr.size()-1;

    while(st<=end){
        int mid=st+(end-st)/2;

        if(arr[mid]==target){
          return mid;
        }
          if(arr[st]<=arr[mid]){  //to find out if 1st half is sorted part if yes then find target there

            if(target >= arr[st] && target <= arr[mid]){  //if 1st half is sorted see if target is in 1st half 
                    end=mid-1; //if yes then make end=mid-1
                }

            else{ //if 1st half is not where target is located then look in second half
                st=mid+1;
            }    
            }
          else{ //if 2nd half is sorted part then look for target there

             if(target >= arr[mid] && target <= arr[end]){   //if found in 2nd half 
                st=mid+1; //then make st=mid+1
            }

            else{ //else look for target in 1st half
                end=mid-1;//if found make end=mid-1
            }

          } 

    }

    return -1; //if target is not in array return -1
}
int main(){

    vector<int>arr={3,4,5,6,7,0,1,2};
    int target=0;

    cout<<binarysearch(arr,target)<<endl;

return 0;    

}