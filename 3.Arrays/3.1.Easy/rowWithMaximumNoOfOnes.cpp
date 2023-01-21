#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int rowWithMax1s(vector<vector<int>>& matrix) {
    int maxOnes = 0;
    int ind = 0;
    int maxIndex = -1;
    for (const auto row : matrix) {
        int count = count_if(begin(row), end(row),
                             [](const auto& n) { return n == 1; });
        if (count > maxOnes) {
            maxOnes = count;
            maxIndex = ind;
        }
        ind++;
    }
    return maxIndex;
}

int main() {
    vector<vector<int>> v{
        {0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};

    cout << rowWithMax1s(v);
}