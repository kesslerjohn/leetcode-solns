#include <iostream>
#include <string>
#include <regex>

using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // note: this solution is correct, but there is a much more
        // elegant solution that relies on direct interpretation of
        // the idea of gcd
        if ((str1 == "") || (str2 == "")){
            return "";
        }
        regex divisor;
        smatch matches1;
        string gcd, small, big;
        if (str1.size() < str2.size()){
            small = str1;
        } else {
            small = str2;
        } 
        for (int i = small.size(); i > 0; i--){
            gcd = small.substr(0, i);
            divisor = regex ("^" +  gcd + "(" + gcd + ")*$");
            if (regex_search(str1, matches1, divisor) and regex_search(str2, matches1, divisor)){
                return gcd;
            }
        }
        return "";
    }
};