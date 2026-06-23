//To check if array is sorted or not
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sz = 5;

    bool isSorted = true;

    for(int i = 0; i < sz - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if(isSorted) {
        cout << "Array is sorted";
    }
    else {
        cout << "Array is not sorted";
    }

    return 0;
}