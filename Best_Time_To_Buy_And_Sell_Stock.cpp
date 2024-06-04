#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bidx = 0;
        int profit = 0;
        for(int i = 1; i <prices.size(); i++) {
            if(prices[bidx] > prices[i]) {
                bidx = i;
            } else {
                profit = max(prices[bidx] - prices[i], profit);
            }
        }
        return profit;
    }
};