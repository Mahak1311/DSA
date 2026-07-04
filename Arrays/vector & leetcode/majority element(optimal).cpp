/*Since it occupies more than half the positions, there's no way for it to avoid the middle position.
The middle position must belong to the majority element.*/

#include <iostream>
#include <vector>
#include <algorithm> //for sort
using namespace std;

int majorityElement(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    return nums[nums.size() / 2]; //divide size into 2 equal parts and gives index where the majority element must appear
}

int main() {
    vector<int> nums = {1,2,2,1,1};

    cout << majorityElement(nums);

    return 0;
}