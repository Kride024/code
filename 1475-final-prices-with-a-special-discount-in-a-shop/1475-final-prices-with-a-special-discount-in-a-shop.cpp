class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        stack<int>dsc;
        dsc.push(n-1);
        vector<int>res(n);
        res[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            while(!dsc.empty()and prices[dsc.top()]>prices[i])
                dsc.pop();
            if(dsc.empty())res[i]=prices[i];
            else res[i]=prices[i]-prices[dsc.top()];
            dsc.push(i);
        }
        return res;
    }
};