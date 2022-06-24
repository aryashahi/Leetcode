class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int maxp = 0;
        
        for(int i=1;i<prices.size();i++){
            if(prices[i]<min)
                min=prices[i];
            maxp = max(maxp,prices[i]-min);
        }
        return maxp;
    }
};