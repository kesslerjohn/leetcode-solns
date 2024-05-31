#include <vector>
#include <stdio.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxArea, currentArea;

        while (left < right) {
            currentArea = (right - left)*min(height[left], height[right]);
            maxArea = max(maxArea, currentArea);

            if (height[left] < height[right]){
                left++;
            } else {
                right--;
            }
        }
        
        return maxArea;
    }
};

int main(int argc, char* argv[]){
    return 0;
}