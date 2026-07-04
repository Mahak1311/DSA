/* To find out best time to buy and sell stocks*/
#include<iostream>
#include<vector>
using namespace std;

int stocks(vector<int>&prices){
    int maxprofit=0;
    int bestbuy=prices[0];
    for(int i=1;i<prices.size();i++){
       if(prices[i]>bestbuy){
        maxprofit=max(maxprofit,prices[i]-bestbuy);
       }
       bestbuy=min(bestbuy,prices[i]);

    }
    return maxprofit;
}
int main(){
    vector<int>prices={7,1,5,3,6,4};
    int maxprofit=0;
    int bestbuy=prices[0];
    cout<<stocks(prices);
    return 0;
}