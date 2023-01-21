#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        int maxIndex = 0;
        for (int j = 0; j < v.size() - i; j++) {
            if (v.at(j) > v.at(maxIndex)) {
                maxIndex = j;
            }
        }
        swap(v.at(maxIndex), v.at(v.size() - i - 1));
    }
}

int main() {
    vector<int> v{2, 7, 3, 6, 1, 9, 3, 54, 12, 66, 56, 44, 453, 23, -5};
    selectionSort(v);
    for (const int& x : v) {
        cout << x << " ";
    }
}