#include <string>
#include <iostream>
#include <vector>


class Solution {
public:
    std::string intToRoman(int num) {
        std::string result;
        std::vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10 , 9, 5, 4, 1};
        std::vector<std::string> symbols = {"M", "CM", "D", "CD", "C",
            "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for (int i = 0; i < values.size(); i++) {
            while (num >= values[i]) {
                result += symbols[i];
                num -= values[i];
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    std::cout << s.intToRoman(1);

    return 0;
}