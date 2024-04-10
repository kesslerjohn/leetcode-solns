#include <iostream>
#include <string>
#include <regex>

using namespace std;

class Solution{
public:
    string vowelsReversed(string s){
        return "";
    }
};

void main(){
    regex vowel ("[aeiouAEIOU]");
    string userin;
    getline(cin, userin);
    string formatted = regex_replace(userin, vowel, "{}");
    cout << formatted << endl;
}