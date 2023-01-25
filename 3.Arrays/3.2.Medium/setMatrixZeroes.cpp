#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, int> Pair;

void fillZeroes(vector<vector<int>>& matrix, Pair& p) {
    vector<int>& row = matrix[p.first];
    fill(begin(row), end(row), 0);

    for (int i = 0; i < matrix.size(); i++) {
        matrix.at(i).at(p.second) = 0;
    }
}

void setZeroes(vector<vector<int>>& matrix) {
    vector<Pair> zeroesIndex{};
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix.at(i).size(); j++) {
            if (matrix.at(i).at(j) == 0) {
                zeroesIndex.push_back({i, j});
            }
        }
    }

    for (auto pair : zeroesIndex) {
        fillZeroes(matrix, pair);
    }
}

int main() {
    vector<vector<int>> matrix{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    setZeroes(matrix);
    for(const auto &row: matrix) {
        for(const auto &col: row) {
            cout << col << " ";
        }
        cout << "\n";
    }
}