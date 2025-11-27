#include <iostream>
#include <string>


class Solution {
public:
    bool isPalindrome(int x) {
        std::string n = std::to_string(x);

        for (int i = 0; i < n.size() / 2; i++) {
            if (n[i] != n[n.size() - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};


int main() {
    Solution s;
    int inputData;
    std::cin >> inputData;
    std::cout << s.isPalindrome(inputData);
    return 0;
}