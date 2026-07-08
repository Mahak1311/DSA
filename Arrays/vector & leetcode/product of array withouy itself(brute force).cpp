//leetcode#238 To get product of the array except the element itself
#include<iostream>
#include<vector>
using namespace std;

vector<int> product(vector<int>& array){
    int a = array.size();

    vector<int> ans(a,1); //create a vector function with a size and fill it with 1

    for(int i=0;i<array.size();i++){

        int prod=1;

        for(int j=0;j<array.size();j++){

           if(i!=j){

               ans[i]*=array[j];

           } 

        }
    }

    return ans;
}
int main(){
    vector<int>array={1,2,3,4}; //sets input

    vector<int> res = product(array); //calls function and stores output array in res named vector

    for(size_t i=0;i<res.size();++i){ //printing every element of the array

        if(i) cout << " ";

        cout << res[i];
    }

    return 0;
}
