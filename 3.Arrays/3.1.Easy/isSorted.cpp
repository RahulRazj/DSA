#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool isSorted(const vector<int>& v) {
    for (int i = 1; i < v.size(); i++) {
        if (v.at(i - 1) > v.at(i))
            return false;
    }
    return true;
}

int main() {
    vector<int> v{1, 2, 3, 4, 5};
    return all_of(begin(v), end(v), [&v](const int& n) {
        return !(&n - &v.at(0)) || v.at(&n - &v.at(0) - 1) < n;
    });
}