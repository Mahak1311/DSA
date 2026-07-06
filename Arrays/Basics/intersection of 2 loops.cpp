//To print intersection of 2 loops
#include<iostream>
using namespace std;
int main(){
    int a_sz=5;
    int b_sz=5;
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={4,5,6,7,8};

    for(int i=0;i<a_sz;i++){

        for(int j=0;j<b_sz;j++){
            
             if(arr1[i]==arr2[j]){
              cout<<arr1[i]<<" ";
        }
        }
       
    }
    return 0;
}