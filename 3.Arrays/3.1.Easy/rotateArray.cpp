#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void reverseArray(vector<int>& v, int start = 0, int end = -1) {
    end = !~end ? v.size() - 1 : end;

    while (start < end) {
        swap(v.at(start++), v.at(end--));
    }
}

void rightRotate(vector<int>& v, int n) {
    n = n % v.size();
    // reverseArray(v, v.size() - n);
    // reverseArray(v, 0, v.size() - n - 1);
    // reverseArray(v);
    reverse(begin(v) + v.size() - n, end(v));
    reverse(begin(v), end(v) - n);
    reverse(begin(v), end(v));
}

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    const int n = 5;
    rightRotate(v, n);
    for (int x : v) {
        cout << x << " ";
    }
}