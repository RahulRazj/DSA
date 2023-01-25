#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& v) {
    for (int i = 0; i < v.size() - 1; i++) {
        int swapCount = 0;
        for (int j = 0; j < v.size() - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                swapCount++;
                swap(v[j], v[j + 1]);
            }
        }
        if (swapCount == 0) {
            return;
        }
    }
}

int main() {
    vector<int> v{2, 7, 3, 6, 1, 9, 3, 54, 12, 66, 56, 44, 453, 23, -5};
    bubbleSort(v);
    for (const int& x : v) {
        cout << x << " ";
    }
}