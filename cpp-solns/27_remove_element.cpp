#include <stdlib.h>
#include <vector>
using namespace std;

/* Problem description from LeetCode:

--=========--
Given an integer array nums and an integer val, remove all occurrences of val in nums 
in-place. The order of the elements may be changed. Then return the number of elements 
in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, 
you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which 
are not equal to val. The remaining elements of nums are not important as well as the size 
of nums.

Return k.
--=========--

Solution:

--=========--
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //change all occurrences to 0 while counting in n,
        //sort array, remove first n elements
        int count = 0;
        int max = 0;
        for (int j = 0; j < nums.size(); j++){
            if (max < nums[j]){
                max = nums[j]+1;
            }
        }
        for (int j = 0; j < nums.size(); j++){
            if (nums[j] == val){
                count++;
                nums[j] = max;
            }
        }
        sort(nums.begin(), nums.end());
        return (nums.size() - count);
    }
};