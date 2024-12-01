class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buy){
                buy=prices[i]; //buy price should be minimum
            }
            else{ //matlab prices buy se bada hai
                int sell = prices[i] - buy ; //calculating potential profit at each index
                profit = max(sell,profit); 
            }
        }
        return profit;
    }
};