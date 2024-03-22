#include <iostream>
#include <string>
#include <regex>

using namespace std;

class Solution {
public:
    string reverseWords(string s){
        regex word ("[^\\s][^\\s]*");
        smatch matches;
        string::const_iterator head = s.cbegin();
        string res = "";
        while(regex_search(head, s.cend(), matches, word)){
            string find = matches[0];
            head = matches.suffix().first;
            res = " " + find + res;
        }
        return res.substr(1, res.length()-1);
    }
};

int main(){
    // reverses all strings in the input line-by-line
    Solution soln = Solution();
    for (string line; getline(cin, line);){
        cout << soln.reverseWords(line) << endl;
    }
    return 0;
}