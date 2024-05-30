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
};

int main(){
    return 0;
}