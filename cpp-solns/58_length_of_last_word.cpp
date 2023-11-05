#include <string>

using namespace std;

/* Problem description from LeetCode:

--=========--
Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.
--=========--

Solution:

--=========--
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int end = s.find_last_not_of(" ");
        int sta = s.substr(0, end).find_last_of(" ");
        return end - (sta);
    }
};