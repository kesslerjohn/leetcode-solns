#include <vector>
#include <stdio.h>

using namespace std;

class Solution {
public:

    int area(vector<int> height, int i, int j) {
        return (j-i)*min(height[i], height[j]);
    }

    int mod(int k, int n) {
        return ((k %= n) < 0) ? k+n : k;
    }

    int maxArea(vector<int>& height) {
        // find i, j st:
        // j > i;
        // max (j - i)*min(height[i], height[j]);

        int sz = height.size();
        int a = 0;
        int row = 1;
        int mid_max = 0;

        vector<int> col(sz);
        vector<vector<int>> dp_arr(sz);

        // simple area function for readability

        // initialize vector for DP
        for (int i = 0; i < sz; i++){
            dp_arr[i] = col;
            dp_arr[i][mod(i-1, sz)] = area(height, mod(i-1, sz), i);
        }

        for (int j = 2; j < sz; j++) {
            mid_max = 0;
            for (int k = 0; k < j; k++) {
                a = area(height, k, j);
                if (a > mid_max) {
                    mid_max = a;
                }
            }
            dp_arr[j][0] = max(max(dp_arr[j-1][0], dp_arr[j][row]), mid_max);
            row++;
        }
        return dp_arr[sz-1][0];
    }
};

int main(int argc, char* argv[]){
    return 0;
}