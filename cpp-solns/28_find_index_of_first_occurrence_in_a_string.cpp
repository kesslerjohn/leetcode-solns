#include <string>

using namespace std;

/* Problem description from LeetCode:

--=========--
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack,
or -1 if needle is not part of haystack.
--=========--

Solution:

--=========--
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};