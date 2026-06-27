/*Vectors are like arrays but are dynamic i.e, their size can be changed. part of STL(Std. template library)
#include <vector> is a necessary header file
-std=c++11 for terminal */
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    for(int val:vec){
        cout<<val<<endl;
        
    }
    return 0;
}