#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& v) {
    for (int i = 1; i < v.size(); i++) {
        int j = i - 1;
        int curr = v.at(i);
        while (j >= 0 && v.at(j) > curr) {
            v.at(j + 1) = v.at(j);
            j--;
        }
        v.at(j + 1) = curr;
    }
}

int main() {
    vector<int> v{7, 3, 6, 1, 9, 3, 54, 12, 66, 56, 44, 453, 23, -5};
    insertionSort(v);
    for (const int& x : v) {
        cout << x << " ";
    }
}