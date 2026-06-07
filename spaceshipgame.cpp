#include<iostream>
using namespace std;
int main(){
    bool ships[4][4] = {
        {0,1,1,0},
        {0,0,0,0},
        {0,0,1,0},
        {0,0,1,0}
    };
    int hits = 0;
    int numberofturns = 0;

    while(hits<4){
        int row,column;
        cout << "Selecting co-ordinates! \n";

        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        if(ships[row][column]){
            ships[row][column] = 0;
            hits++;
            cout << "HIT !! " << (4-hits) << " left.\n\n";
        }
        else{
            cout << "You missed! \n \n";
        }    
        numberofturns++;
    }    
        cout << "VICTORYYY!! \n";
        cout << "Yu won in " << numberofturns <<" turns"; 

    
    return 0;

}