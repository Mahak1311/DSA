/*
To Print
1 2 3 
4 5 6 
7 8 9
*/
#include <iostream>
using namespace std;
int main(){
int n;
cin>> n;
int num=1;
/*created a num named variable so i can store 1 there so it won't repeat 
each time in new line after the previous line ends 
as by writing before outerloop it prevents it from being looped*/ 
    for(int i=0; i<n;i++){
      for(int j=0;j<n;j++){
          cout<<num << " "; //to give space in output
          num++;
      }   
      cout<<endl;
     }
return 0;
}
