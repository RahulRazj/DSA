/*
Problem Statement: Given an integer array sorted in non-decreasing order, remove
the duplicates in place such that each unique element appears only once. The
relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements
of the array should hold the final result. It does not matter what you leave
beyond the first k elements.

Note: Return k after placing the final result in the first k slots of the array.
*/

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& v) {
    int k = 0;
    for (int i = 1; i < v.size(); i++) {
        if (v.at(k) != v.at(i)) {
            v.at(++k) = v.at(i);
        }
    }
    return k + 1;
}

int main() {
    vector<int> v{1, 2, 2, 2, 2, 3, 3};

    int k = removeDuplicates(v);
    for (int i = 0; i < k; i++) {
        cout << v.at(i) << " ";
    }
}