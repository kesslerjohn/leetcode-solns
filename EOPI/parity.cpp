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
            // The time complexity of this method is linear in the number of bits
            // set to 1 
        }
        return c;
    };

    int parity(int x){
        // Since I already have bitCount(n), I could take bitCount(x)%2 if simplicity
        // is the priority. 
        // The method below takes the same time complexity but O(1) space
        // whereas bitCount takes O(log(s)), where s is the number of 1s in x.
        int res = 0;
        while (x){
            res ^= 1;
            x &= (x-1);
        }
        return res;
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