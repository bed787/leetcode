#include <vector>
#include <iostream>
#include <algorithm>


class Solution {
public:
    std::vector<std::vector<int>> permute(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        std::sort(nums.begin(), nums.end());
        do {
            std::vector<int> addingVector;
            for (int num : nums) {
                addingVector.push_back(num);
            }
            result.push_back(addingVector);
        } while (std::next_permutation(nums.begin(), nums.end()));
        return result;
    }
};

int main() {
    Solution s;
    std::vector<int> inputData = {1, 2, 3};
    std::vector<std::vector<int>> outputData = s.permute(inputData);
    for (int vect = 0; vect < outputData.size(); vect++) {
        for (int num = 0; num < outputData[vect].size(); num++) {
            std::cout << outputData[vect][num] << "\t";
        }
        std::cout << "\n";
    }
}