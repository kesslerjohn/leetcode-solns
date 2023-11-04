#include <vector>
#include <cmath>
#include <unordered_map>

using namespace std;

/* Problem description from LeetCode:

--=========--
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume 
that the majority element always exists in the array.
--=========--

Solution:

--=========--
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = floor(nums.size()/2);

        unordered_map<int, int> counts;

        for (int i = 0; i < nums.size(); i++){
            counts[nums[i]]++;
            if (counts[nums[i]] > maj){
                return nums[i];
            }
        }

        for (const pair<const int, int>& n : counts){
            if (n.second > maj){
                return n.first;
            }
        }

        return 0;
    }
};