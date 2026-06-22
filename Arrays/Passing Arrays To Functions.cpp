/*An array can be passed to a function by using its name.
When an array is passed to a function, the function can access and modify the original array elements.
Any changes made to the array inside the function are reflected in the original array.
*/
#include<iostream>
using namespace std;
 void changeArr(int arr[],int size){
    cout<<"In function";
    for(int i=0;i<size; i++){
        arr[i] = 2*arr[i];
    }

 }
 int main(){
    int arr[]={1,2,3};
    changeArr(arr, 3);
    cout<<"in main \n";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" "; //output will be doubled as changes made in changeArr function is reflected in main function
    }
    cout<<endl;
 
return 0;    

 }