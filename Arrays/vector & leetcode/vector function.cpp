/* vector functions*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<<"Size: "<< vec.size()<<endl;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    cout<<"Size after push back function: "<<vec.size()<<endl;
    for(int val:vec){
        cout<<"Elements added are: "<<val<<endl;
    }
    vec.pop_back();
    cout<<"Size after pop back function: "<<vec.size()<<endl;
    for(int val:vec){
        cout<<"Now elements are: "<<val<<endl;
    }
    cout<<"After front function: " << vec.front()<<endl;
    cout<<"After back function: "<<vec.back()<<endl;
    cout<<"Value at 2 is: "<<vec.at(2)<<endl;
    
return 0;    
}