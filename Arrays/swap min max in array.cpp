//To swap minimum and maximum in an array
#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr[5]={2,4,6,3,1};
    int sz=5;

    int smallest=INT_MAX;
    int largest=INT_MIN;

    int smallestIndex = -1;
    int largestIndex = -1;
    
    for(int i=0;i<sz;i++){
        if((min(arr[i],smallest))!=smallest){
            smallest=arr[i];
            smallestIndex=i;
        }
       if((max(arr[i],largest))!=largest){
        largest=arr[i];
        largestIndex=i;
       }
    }
    swap(arr[smallestIndex],arr[largestIndex]);
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
return 0;    
}