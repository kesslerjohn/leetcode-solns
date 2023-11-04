#include <string>
#include <cmath>

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
    bool isPalindrome(string s) {
        int mid = floor(s.length());
        int i = 0;
        int j = s.length()-1;
        while (i < j){
            if (isalnum(s[i])){
                if (isalnum(s[j])){
                    if (tolower(s[i]) != tolower(s[j])){
                        return false;
                    }
                    i++;
                    j--;
                } else {
                    j--;
                }
            } else {
                i++;
            }
        }
        return true;
    }
};