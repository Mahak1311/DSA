//To find single element in an array of duplicates by binary search
#include<iostream>
#include<vector>
using namespace std;

int singlenumber(vector<int>& arr){
    int n = arr.size();
    int st = 0;
    int end = n - 1;

    while(st <= end){
        int mid = st + (end - st) / 2;

        if(mid == 0){ 
            if(arr[0] != arr[1])
                return arr[0];
            else
                st = mid + 1;
        }

        else if(mid == n - 1){ 
            if(arr[n-1] != arr[n-2])
                return arr[n-1];
            else
                end = mid - 1;
        }

        else if(arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1]){ 
            return arr[mid];
        }

        else if(mid % 2 == 0){
            if(arr[mid] == arr[mid+1]){
                st = mid + 2;
            }
            else{
                end = mid - 2;
            }
        }

        else{
            if(arr[mid-1] == arr[mid]){
                st = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }

    return -1;
}

int main(){

    vector<int> arr = {3,3,7,10,10,11,11};

    cout << singlenumber(arr);

    return 0;
}