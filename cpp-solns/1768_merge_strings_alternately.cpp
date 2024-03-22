#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2){
        if (word1 == ""){
            return word2;
        }
        if (word2 == ""){
            return word1;
        }
        string r = word1.substr(1, word1.length());
        return word1[0] + mergeAlternately(word2, r);
    }
};

int main(){
    vector<string> args {};
    // reads input into vector
    // will ignore input beyond first two lines
    for (string line; getline(cin, line);){
        args.push_back(line);
    }
    Solution soln = Solution();
    cout << soln.mergeAlternately(args[0], args[1]) << endl;
}