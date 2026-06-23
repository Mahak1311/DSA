//to reverse an array 2 pointer approach is used 
//start and end are two pointers that are used here

#include <iostream>
using namespace std;

void reversearray(int arr[], int sz, int start, int end) {
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[5] = {2,3,4,5,6};
    int sz = 5;

    reversearray(arr, sz, 0, sz - 1);

    for(int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}