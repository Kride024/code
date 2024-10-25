class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];
        int n=prices.size();
        int profit=0;
        int i=1;
        while(i<n){
            int cost=prices[i]-mini;
            profit=max(cost,profit);
            mini=min(mini,prices[i]);
            i++;
        }
        return profit;
    }
};