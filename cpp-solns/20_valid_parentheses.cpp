#include <string>
#include <stack>

using namespace std;

/* Problem description from LeetCode:

--=========--
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the 
input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
--=========--

Solution:

--=========--
*/

class Solution {
public:
    bool isValid(string s) {
        stack <char> match;
        for (char &c : s){
            switch (c){
                case '(':
                case '[':
                case '{':
                    match.push(c);
                    break;
                case ')':
                    if (match.size() == 0){
                        return false;
                    }
                    if (match.top() != '('){
                        return false;
                    }
                    match.pop();
                    break;
                case ']':
                    if (match.size() == 0){
                        return false;
                    }
                    if (match.top() != '['){
                        return false;
                    }
                    match.pop();
                    break;
                case '}':
                    if (match.size() == 0){
                        return false;
                    }
                    if (match.top() != '{'){
                        return false;
                    }
                    match.pop();
                    break;
            }
        }
        if (match.size() > 0){
            return false;
        }
        return true;
    }
};