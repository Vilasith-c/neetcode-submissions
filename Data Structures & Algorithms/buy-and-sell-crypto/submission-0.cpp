class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int max_prices=0;
        int min_prices=INT_MAX;

        for(int price:prices){
            min_prices=min(min_prices,price);
            max_prices=max(max_prices,price-min_prices);
        }
        return max_prices;
    }
};
