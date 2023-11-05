#include <string>
#include <map>

using namespace std;

/* Problem description from LeetCode:

--=========--
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using 
the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.
--=========--

Solution:

--=========--
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> cutouts;
        for (char &i : magazine){
            cutouts[i] += 1;
        }
        for (char &j : ransomNote){
            cutouts[j] -= 1;
            if (cutouts[j] < 0){
                return false;
            }
        }
        return true;
    }
};