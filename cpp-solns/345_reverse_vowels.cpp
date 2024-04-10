#include <iostream>
#include <string>
#include <regex>

using namespace std;

class Solution{
public:
    string reverseVowels(string s) {
        regex vwl ("[aeiouAEIOU]");
        smatch temp;
        if (!regex_search(s, temp, vwl)){
            return s;
        }
        string vowel = "aeiouAEIOU";
        string s_p = s;
        char temp_s;
        reverse(s.begin(), s.end());
        int head = s_p.find_first_of(vowel);
        int tail = s_p.find_last_of(vowel);
        while (head < tail){
            temp_s = s_p[head];
            s_p[head] = s_p[tail];
            s_p[tail] = temp_s;
            head = s_p.find_first_of(vowel, head + 1);
            tail = s_p.find_last_of(vowel, tail - 1);
        }
        return s_p;
    }
};

int main(){
    regex vowel ("[aeiouAEIOU]");
    string userin;
    getline(cin, userin);
    string formatted = reverseVowels(userin);
    cout << formatted << endl;
    return 0;
}