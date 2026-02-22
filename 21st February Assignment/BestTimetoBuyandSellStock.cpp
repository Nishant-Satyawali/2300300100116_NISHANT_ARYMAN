// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int attempt(vector<int>& prices){
         int n = prices.size();
        int buy =  0;
        for(int i = 0 ; i <n; i++){
            if(prices[i]<prices[buy]) buy = i;
         }
         int sell = buy;
         for(int i = buy;i<n;i++){
            if(prices[i]>prices[sell]) sell = i;
         }
         return prices[sell]-prices[buy];
    }
    int attempt2(vector<int>& prices){
         int n=prices.size();
       if(n==1) return 0;
       int i=0;
       int j = n-1;
       int buy = INT_MAX;
       int sell = INT_MIN;
       while(i<=j){
        if( prices[i] ==0) i++;
        if( prices[j] ==0) j--;
        
        if(prices[i]<buy) buy = prices[i];
        if(prices[j]>sell) sell = prices[j];
        i++; j--;
       }
       if(sell-buy<0) return 0;
       return sell-buy;
    }
    int maxProfit(vector<int>& prices) {
      int buy = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};