/*To print the largest and smallest element in an array*/
#include<iostream>
#include <climits>
using namespace std;

int main(){
    int size =5; //declaring size
    int num[size]; //declaring an array of size 5
    
    int smallest_index=-1;//-1 indicates invalid array so if no index is found -1 is there and if there is an index then that i replaces -1
    int largest_index=-1;
    int smallest =INT_MAX;//INT_MAX means largest value possible
    int largest = INT_MIN;//smallest value possible stored in a variabke 'largest' so we can compare it with other values
    
    cout<<"Enter 5 elements for an array: ";
    
    for(int i=0;i<size;i++){
        cin>>num[i]; //to get input from user
   
    if(min(num[i],smallest)!= smallest ){//using min function to choose minimum value  between num[i] and smallest
    smallest =num[i];//if min is from num[i] then smallest will be updated from smallest to num[i]
    smallest_index =i;//index will also be updated from -1 to i
    }

    if(max(num[i],largest) != largest){//using max function to find maximum value between num[i] and largest
    largest = num[i];
    largest_index=i;
    }

}
    
    cout<<"Smallest value in the array:  " << smallest <<endl
     <<"at index " <<smallest_index<<endl;
   
    cout<<"Largest value in the array: "<< largest <<endl
    <<"at index "<< largest_index <<endl;

return 0;    
    
}