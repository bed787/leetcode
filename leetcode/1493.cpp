#include <algorithm>
#include <vector>
#include <iostream>
//

class Solution {
public:
    int longestSubarray(std::vector<int>& nums) {
        int left = 0;
        int zeroCount = 0;
        int maxSubstring = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) {
                zeroCount++;
            }
            while (zeroCount > 1) {
                if (nums[left] == 0) {
                    zeroCount--;
                }
                left++;
            }
            if ((right - left) >maxSubstring) {
                maxSubstring = right - left;
            }
        }
        return maxSubstring;
    }
};

int main() {
    Solution s;
    std::vector inputData = {1, 0, 0, 1, 1};
    s.longestSubarray(inputData);
}