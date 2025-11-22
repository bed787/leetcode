#include <string>
#include <iostream>


std::string reverseOneWord(std::string word) {
    std::string reversedString;
    for (int i = word.size() - 1; i >= 0; i--) {
        reversedString.push_back(word[i]);
    }
    return reversedString;
}


class Solution {
public:
    std::string reverseWords(std::string s) {
        std::string result;
        std::string word;
        for (char c : s) {
            if (c != ' ') {
                word.push_back(c);
            }
            else {
                if (!word.empty()) {
                    result += reverseOneWord(word) + ' ';
                    word.clear();
                }
            }
        }

        if (!word.empty()) {
            result += reverseOneWord(word);
        }
        return result;
    }
};

int main() {
    Solution s;
    std::string inputString;
    std::getline(std::cin, inputString);
    std::cout << s.reverseWords(inputString);
    return 0;
}