#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void reverseRecursion(vector<int>& v, int l, int h) {
    if (l < h) {
        swap(v[l], v[h]);
        reverseRecursion(v, ++l, --h);
    }
}

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // reverseRecursion(v, 0, v.size() - 1);
    reverse(begin(v), end(v));
    for (int x : v) {
        cout << x << " ";
    }
}