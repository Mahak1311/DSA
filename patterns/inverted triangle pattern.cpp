/*To print:
1 1 1 1
  2 2 2
    3 3
      4
The logic:
Space  Numbers
0        4
1        3
2        2
3        1
 here spaces=i and numbers=n-i
 as suppose n=4 then the seq is printed with i spaces and numbers like 4-space=number
     
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";  
        }
        for(int j=0;j<n-i;j++){
        cout<<(i+1);
        }
          cout<<endl;
    }
  return 0;
}