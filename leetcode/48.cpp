#include <iostream>
#include <vector>


class Solution {
public:
    void rotate(std::vector<std::vector<int>>& matrix) {
        int matrixSize = matrix.size();
        for (int line = 0; line < matrixSize; line++) {
            for (int column = 1 + line; column < matrixSize; column++) {
                std::swap(matrix[line][column], matrix[column][line]);
            }
        }

        for (int line = 0; line < matrixSize; line++) {
            for (int row = 0; row < matrixSize / 2; row++) {
                std::swap(matrix[line][row], matrix[line][matrixSize - 1 - row]);
            }
        }

        //std::cout << "цикл не наебнулся" << "\n";
        for (const auto& row : matrix) {
            for (int val : row) {
                std::cout << val << "\t";
            }
            std::cout << "\n";
        }
    }
};


int main() {
    Solution s;
    std::vector<std::vector<int>> matrix = {
        {5, 1, 9, 11},
        {2, 4, 8, 10},
        {13, 3, 6, 7},
        {15, 14, 12, 16}
    };
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << "\t";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    s.rotate(matrix);

    return 0;
}