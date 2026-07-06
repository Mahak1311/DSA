//To find how many times a target has appeared
#include <iostream>
using namespace std;
int count=0;
int linearsearch(int arr[],int sz, int target){
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            count++;
        
            
        }
    }
    return count;
}
int main(){
     int sz=5;
    int arr[5];
    int target;
    cout<<"Enter 5 elements for the array: ";
    for(int i=0;i<sz;i++){
        cin>>arr[i];
        
    }
    cout<<"Enter target: ";
    cin>>target;
    cout<<"The target appears "<< linearsearch(arr,sz,target) <<" many times";
   
    return 0;
}