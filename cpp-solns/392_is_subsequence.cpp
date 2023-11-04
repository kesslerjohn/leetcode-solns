#include <string>

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
    bool isSubsequence(string s, string t) {
        int tIdx = 0;
        for (int sIdx = 0; sIdx != s.length(); sIdx++){
            while (s[sIdx] != t[tIdx]){
                tIdx++;
                if (tIdx > t.length()){
                    return false;
                }
            }
            tIdx++;
        }
        return true;
    }
};