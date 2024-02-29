#include <iostream>
using namespace std;

class Solution {
public:
    int bitCount(int x){
        int c = 0;
        while (x > 0){
            int bit = x & ~(x-1); // find the smallest bit set to '1'
            x = x - bit; // subtract it from x
            c += 1; // count how many times you do that
        }
        return c;
    };

    int parity(int x){
        return 0;
    }
};

int main(int argc, char* argv[]){
    if (argc < 2){
        cout << "too few arguments" << endl;
        return 1;
    }
    int x = stoi(argv[1]);
    Solution sol = Solution();
    cout << "Parity: " << sol.parity(x) << endl;
    cout << "Count: " << sol.bitCount(x) << endl;
    return 0;
}