class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice= INT_MAX;//buying price
        int maxprofit =0;
        for(int price:prices)
        {
            minprice= min(minprice,price);
           int profit = price- minprice;//considering current price as selling price so profit = sp-buying price
            maxprofit= max(maxprofit,profit);
        }
        return maxprofit;
        
    }
};
