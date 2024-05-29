#include <vector>
#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> left;
        map<char, char> right;
        // use two maps so mapping is bijective
        for (int i = 0; i < s.size(); i++) {
            auto l = left.find(s[i]);
            auto r = right.find(t[i]);
            // check if there is already a pairing
            // either add a letter and its associate
            // or don't add either
            bool t1 = (l != left.end());
            bool t2 = (r != right.end());

            if (t1 != t2){ // we have one but not the other
                return false;
            } 
            if (!t1) { // we don't have either
                left[s[i]] = t[i];
                right[t[i]] = s[i];
            }
            if ((left[s[i]] != t[i]) || (right[t[i]] != s[i])) { // we have both
                return false;
            }
        }
        return true;
    }
};

int main(int argc, char* argv[]){
    if (argc < 3){
        std::cout << "You must provide two string to compare" << std::endl;
        return -1;
    }
    Solution sol;
    string c1 = argv[1];
    string c2 = argv[2];
    if (sol.isIsomorphic(c1, c2)){
        std::cout << "Strings are isomorphic" << std::endl;
    } else {
        std::cout << "Strings aren't isomorphic" << std::endl;
    }
    return 0;
}