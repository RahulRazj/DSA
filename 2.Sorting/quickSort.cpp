#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>& v, int low, int high) {
    int pivot = v.at(low);
    int i = low, j = high;

    while (i < j) {
        while (v.at(i) <= pivot && i < high)
            i++;
        while (v.at(j) > pivot && j >= low)
            j--;

        if (i < j)
            swap(v.at(i), v.at(j));
    }
    swap(v.at(low), v.at(j));
    return j;
}

void quickSort(vector<int>& v, int low = 0, int high = -1) {
    high = !~high ? v.size() - 1 : high;

    if (low < high) {
        int pivot = partition(v, low, high);
        quickSort(v, low, pivot - 1);
        quickSort(v, pivot + 1, high);
    }
}

int main() {
    vector<int> v{2, 7, 3, 6, 1, 9, 3, 54, 12, 66, 56, 44, 453, 23, -5};
    quickSort(v);
    for (int x : v) {
        cout << x << " ";
    }
}