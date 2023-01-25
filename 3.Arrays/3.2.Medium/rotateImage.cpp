#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void rotateImage(vector<vector<int>>& image) {
    // solution using dummy matrix

    // vector<vector<int>> rotatedImage(image.size(),
    //                                  vector<int>(image.at(0).size(), 0));

    // int colInd = rotatedImage.size() - 1;
    // for (const auto& row : image) {
    //     for (int i = 0; i < rotatedImage.size(); i++) {
    //         rotatedImage.at(i).at(colInd) = row.at(i);
    //     }
    //     colInd--;
    // }

    // image = rotatedImage;

    // in place solution: transpose the matrix and reverse each row

    for (int i = 0; i < image.size(); i++) {
        for (int j = 0; j < i; j++) {
            swap(image.at(i).at(j), image.at(j).at(i));
        }
    }

    for (auto& row : image) {
        reverse(begin(row), end(row));
    }
}

int main() {
    vector<vector<int>> image{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotateImage(image);
    for (const auto& row : image) {
        for (const auto& col : row) {
            cout << col << " ";
        }
        cout << endl;
    }
}