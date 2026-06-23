//To print unique values in an array
#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 2, 6, 1};
    int sz = 5;

    for(int i = 0; i < sz; i++) { //outer loop checks all elements
        bool isDuplicate = false;

        for(int j = 0; j < i; j++) { //inner loop checks if element is already present in array or not by j<i
            if(arr[i] == arr[j]) {
                isDuplicate = true;
                break;
            }
        }

        if(!isDuplicate) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}