#include <vector>

using namespace std;

/* Problem description from LeetCode:

--=========--
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters 
and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric 
characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

--=========--

Solution:

--=========--
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mPrf = 0;
        for (int i = 1; i < prices.size(); i++){
            mPrf += max(prices[i] - prices[i-1], 0);
        }
        return mPrf;
    }
};
