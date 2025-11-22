#include <string>
#include <iostream>


bool isPalindrom(std::string s, int left, int right) {
    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

class Solution {
public:
    bool validPalindrome(std::string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            if (s[left] == s[right]) {
                left++;
                right--;
            } else {
                return isPalindrom(s, left + 1, right) || isPalindrom(s, left, right - 1);
            }
        }
        return true;
    }
};


int main() {
    Solution s;
    std::string inputString("abca");
    std::cout << s.validPalindrome(inputString);
    return 0;
}