// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
// Example 2:
// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.

// Constraints:
// 1 <= prices.length <= 105
// 0 <= prices[i] <= 104

#include<bits/stdc++.h>
using namespace std;

int StockBuySellTwoPointer(vector<int>& stocks){
    int l=0,r=1;
    int maxP=0;
    while(r<stocks.size()){
        if(stocks[l]<stocks[r]){
            maxP = max(maxP, stocks[r] - stocks[l]);
        }else{
            l=r;
        }
        r++;
    }
    return maxP;
}

int StockBuySellDP(vector<int>& stocks){
    int maxP = 0;
    int minBuy = stocks[0];

    for(int i=1;i<stocks.size(); i++){
        maxP = max(maxP, stocks[i]-minBuy);
        minBuy = min(minBuy, stocks[i]);
    }
    return maxP;
}

int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin>>n;
    vector<int> stocks(n);
    for(int i=0;i<n;i++){
        cin>>stocks[i];
    }

    cout<<StockBuySellTwoPointer(stocks)<<endl;
    cout<<StockBuySellDP(stocks)<<endl;

    return 0;
}

// time - O(n)
// space - O(1)