//leetcode-11 to find a container which can contain maximum amount of water
#include<iostream>
#include<vector>
using namespace std;

int container(vector<int>& height){
    int max_water=0;
    for(int i=0;i<height.size();i++){ //i acts like left side wall
        
        for(int j=i+1;i<height.size();j++){ //j acts like right side wall
            int w=j-i; //width will be right-left
            int h=min(height[i],height[j]);
            int curr_water=w*h;
            max_water=max(max_water,curr_water);
        }

    }
    return max_water;
}
int main(){
    vector<int>height={1,8,6,2,5,4,8,3,7};
    cout<<container(height);
    return 0;
}
//THIS WILL GIVE TLE(time limit exceeded) SO THE SOL IS CORRECT BUT WON'T WORK 