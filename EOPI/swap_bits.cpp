#include <iostream>

using namespace std;

class Solution{
public:
    int swapBits(int x, int i, int j){
        int mask = (0b1 << i) & (0b1 << j); // 1s indicate bits to swap
                                            // if the bits are different, then x ^ mask
                                            // will swap them. Otherwise do nothing.
                                            // creating mask takes O(i + j);  
        return 0;
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