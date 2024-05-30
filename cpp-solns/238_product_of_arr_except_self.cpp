#include <vector>

using namespace std;

class Solution {
public:
    // this solution is O(N^2) and gets time limit exceeded
    vector<int> slowProductExceptSelf(vector<int>& nums) { 
        vector<int> answer(nums.size());

        for (int i = 0; i < nums.size(); i++){
            answer[i] = std::accumulate(nums.begin()+1, nums.end(), 1, std::multiplies<int>());
            std::rotate(nums.begin(), nums.begin()+1, nums.end());
        }
        return answer;
    }

    // this solution is O(n) and space optimized to O(n)
    vector<int> productExceptSelf(vector<int>& nums) {
        int end = nums.size()-1;
        vector<int> answer(end+1);
        vector<vector<int>> dp_arr(2);
        
        // only two cols reduces space complexity from O(n^2) to O(n)
        dp_arr[0] = answer;
        dp_arr[1] = answer;

        dp_arr[1][end] = nums[end];
        dp_arr[0][0] = nums[0];
        for (int j = end-1; j >= 0; j--) {
            dp_arr[1][j] = dp_arr[1][j+1] * nums[j];
            dp_arr[0][end-j] = dp_arr[0][end-j-1] * nums[end-j];
        }
        // one more for-loop here to multiply the appropriate
        // cells of dp
        answer[0] = dp_arr[1][1];
        for (int k = 1; k < end; k++) {
            answer[k] = dp_arr[0][k-1] * dp_arr[1][k+1];
        }
        answer[end] = dp_arr[0][end-1];
        return answer;
    }
};

int main(){
    return 0;
}