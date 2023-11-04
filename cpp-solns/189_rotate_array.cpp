#include <vector>

using namespace std;

/* Problem description from LeetCode:

--=========--
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

--=========--

Solution:

--=========--
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++){
            int idx = ((i+k)%nums.size());
            temp[idx] = nums[i];
        }
        for (int i = 0; i < nums.size(); i++){
            nums[i] = temp[i];
        }
    }
};