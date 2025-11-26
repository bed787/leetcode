#include <iostream>
#include <unordered_set>
#include <vector>


class Solution {
public:
    std::vector<int> recoverOrder(std::vector<int>& order, std::vector<int>& friends) {
        std::unordered_set<int> friendSet(friends.begin(), friends.end());
        std::vector<int> result;
        for (int x : order) {
            if (friendSet.count(x)) {
                result.push_back(x);
            }
        }


        /*for (int j = 0; j < result.size(); j++) {
            std::cout << result[j] << "\n";
        }*/
        return result;
    }
};


int main() {
    Solution s;
    std::vector<int> order = {3, 1, 2, 5, 4};
    std::vector<int> friends = {1, 3, 4};
    s.recoverOrder(order, friends);
    return 0;
}