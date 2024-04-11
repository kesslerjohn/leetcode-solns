#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
    // iterate over the array
    // keep a pointer to the next space that needs a non-zero
    // number filled in. When you encounter a non-zero
    // number, move it to the pointer and increment the pointer by 1
    // at the end of the array, fill from pointer+1 to the end with 0s.
    void moveZeroes(vector<int>& nums){
        int ptr = 0;
        
        for (int n : nums){
            if (n != 0){
                nums[ptr] = n;
                ptr++;
            }
        }
        for (int i = ptr; i < nums.size(); i++){
            nums[i] = 0;
        }
    }
};