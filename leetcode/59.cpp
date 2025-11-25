#include <vector>
#include <iostream>


class Solution {
public:
    std::vector<std::vector<int> > generateMatrix(int n) {
        std::vector<std::vector<int> > matrix(n, std::vector<int>(n, 0));
        int num = 1;
        int bottom = n - 1;
        int right = n - 1;
        int left = 0;
        int top = 0;

        while (num <= n * n) {
            for (int i = left; i <= right; i++) {
                matrix[top][i] = num++;
            }
            top++;

            for (int i = top; i <= bottom; i++) {
                matrix[i][right] = num++;
            }
            right--;

            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    matrix[bottom][i] = num++;
                }
                bottom--;
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    matrix[i][left] = num++;
                }
                left++;
            }
        }


        /*for (int line = 0; line < matrix.size(); line++) {
            for (int column = 0; column < matrix.size(); column++) {
                std::cout << matrix[line][column] << "\t";              <- просто вывод матрицы
            }
            std::cout << "\n" << "\n";
        }*/

        return matrix;
    }
};


int main() {
    Solution s;
    s.generateMatrix(4);

    return 0;
}
