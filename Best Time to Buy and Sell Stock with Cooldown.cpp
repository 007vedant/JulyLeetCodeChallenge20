class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sell = 0,  notsell = INT_MIN,  rest = 0 ;
        
        for(int i=0; i<prices.size(); i++){
            int lastsell = sell;
            sell = notsell + prices[i];
            notsell = max(notsell, rest - prices[i]);
            rest = max(rest, lastsell);
        }
        
        return max(sell, rest);
    }
};