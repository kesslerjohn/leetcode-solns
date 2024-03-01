#include <iostream>

using namespace std;

class Solution{
public:
    int swapBits(int x, int i, int j){
        if ((x >> i)%2 == (x >> j)%2){
            return x; // digits are the same, so swapping them changes nothing
                      // checking if they are the same takes O(i + j)
        }
        int mask = (0b1 << i) | (0b1 << j); // 1s indicate bits to swap
                                            // if the bits are different, then x ^ mask
                                            // will swap them
                                            // creating mask takes O(i + j) time;  
        return x ^ mask;
    }

};

int main(int argc, char* argv[]){
    if (argc < 4){
        cout << "too few arguments" << endl;
        return 1;
    }
    int x = stoi(argv[1]);
    int i = stoi(argv[2]);
    int j = stoi(argv[3]);
    Solution sol = Solution();
    cout << sol.swapBits(x, i, j) << endl;
    return 0;
}