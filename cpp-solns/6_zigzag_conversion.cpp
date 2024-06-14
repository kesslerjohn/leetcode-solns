#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:

    void down(vector<vector<string>> rec, int start, int numRows){
        
    }

    string convert(string s, int numRows) {
        int len = s.length();
        vector<string> col[len];
        vector<vector<string>> zigzag[len];

        for (int i = 0; i < len; i++){
            zigzag[i] = col;
        }
        for (int i = 0; i < len; i++){
            zigzag[0][i] = s.substr(i, 1);
        }
    }
};

int main(int argc, char* argv[]) {
    Solution soln = Solution();
    soln.convert("PAYPALISHIRING", 3);

}