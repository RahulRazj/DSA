#include <iostream>
#include <vector>

using namespace std;

int merge(vector<int>& v, int low, int high) {
    int i = low;
    int mid = (low + high) / 2;
    int j = mid + 1;
    int temp[high - low + 1];
    int k = 0;

    while (i <= mid && j <= high) {
        if (v.at(i) >= v.at(j)) {
            temp[k++] = v.at(j++);
        } else {
            temp[k++] = v.at(i++);
        }
    }

    while (i <= mid) {
        temp[k++] = v.at(i++);
    }
    while (j <= high) {
        temp[k++] = v.at(j++);
    }

    k = 0;
    for (int i = low; i <= high; i++) {
        v.at(i) = temp[k++];
    }
}

void mergeSort(vector<int>& v, int low = 0, int high = -1) {
    high = !~high ? v.size() - 1 : high;

    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(v, low, mid);
        mergeSort(v, mid + 1, high);
        merge(v, low, high);
    }
}

int main() {
    vector<int> v{2, 7, 3, 6, 1, 9, 3, 54, 12, 66, 56, 44, 453, 23, -5};
    mergeSort(v);
    for (const int& x : v) {
        cout << x << " ";
    }
}