//Now this is the most optimised approach for the container with most water problem 
//we will use 2 pointer approach here
#include<iostream>
#include<vector>
using namespace std;

int container(vector<int>& height){
    int max_water=0;
    int lp=0 , rp=height.size() -1;
    while(lp<rp){
        int w=rp-lp;
        int h=min(height[lp],height[rp]);
        int curr_water=w*h;
        max_water=max(max_water,curr_water);
        height[lp]<height[rp]? lp++:rp--; //ternary operation:if h[lp] is less than h[rp] then increase lp otherwise decrease rp
    }
    return max_water;
}
int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
    cout<<container(height);
    return 0;
}