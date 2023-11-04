#include <stdlib.h>
#include <vector>
using namespace std;

/* Problem description from LeetCode:

--=========--
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place 
such that each unique element appears only once. The relative order of the elements should 
be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the 
following things:

Change the array nums such that the first k elements of nums contain the unique elements in 
the order they were present in nums initially. The remaining elements of nums are not important 
as well as the size of nums.

Return k.
--=========--

Solution:

--=========--
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        int max = *max_element(nums.begin(), nums.end());
        max++;
        for (int i = 0; i < (nums.size() - 1); i++){
            if (nums[i] == nums[i+1]){
                nums[i] = max;
                count++;
            }
        }
        sort(nums.begin(), nums.end());
        return (nums.size()-count);
    }
};