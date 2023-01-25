#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralMatrix(vector<vector<int>>& matrix) {
    int top = 0, left = 0, bottom = matrix.size() - 1,
        right = matrix.at(0).size() - 1;

    vector<int> res{};
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            res.push_back(matrix.at(top).at(i));
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            res.push_back(matrix.at(i).at(right));
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                res.push_back(matrix.at(bottom).at(i));
            }

            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                res.push_back(matrix.at(i).at(left));
            }

            left++;
        }
    }
    return res;
}

int main() {
    vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> res = spiralMatrix(matrix);
    for (const auto& el : res) {
        cout << el << " ";
    }
}