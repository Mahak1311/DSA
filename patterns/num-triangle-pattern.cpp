/*To Print:
1
1 2
1 2 3
1 2 3 4*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    for(int i = 0; i<n; i++){
        for(int j=1;j<=i+1;j++){
            cout<<j <<" ";/*
            printed j because in each line the number line starts from 1 basically j is looping by +1*/
        }
        cout<<endl;
    }
return 0;
}