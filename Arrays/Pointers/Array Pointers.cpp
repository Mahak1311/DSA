//arr is a pointer which always points to index=0 and is a constant pointer which can't  change it's value
#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4};
    cout<<*arr<<endl; //points to arr[0] which is 1

return 0;    
}