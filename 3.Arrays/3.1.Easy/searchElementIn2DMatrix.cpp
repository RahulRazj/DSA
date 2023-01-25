#include <iostream>
#include <vector>

using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix.at(0).size();
    int low = 0;
    int high = row * col - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int r = mid == 0 ? 0 : mid / col;
        int c = mid == 0 ? 0 : mid % col;

        if (matrix[r][c] == target) {
            return true;
        } else if (matrix[r][c] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> v{{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 16;
    cout << searchMatrix(v, target);
}