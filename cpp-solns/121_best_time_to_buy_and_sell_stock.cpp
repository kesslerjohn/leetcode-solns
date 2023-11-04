#include <vector>

using namespace std;

/* Problem description from LeetCode:

--=========--
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a 
different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, 
return 0.
--=========--

Solution:

--=========--
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int n = prices.size();
        vector<int> maxPrices(n, 0);
        maxPrices[n-1] = prices[n-1];
        for (int i = n-2; i >= 0; i--){
            maxPrices[i] = max(maxPrices[i+1], prices[i]);
        }
        for (int i = 0; i < n; i++){
            maxProfit = max(maxProfit, maxPrices[i] - prices[i]);
        }
        return maxProfit;
    }
};