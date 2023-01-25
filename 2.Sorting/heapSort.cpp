#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    vector<int> v{2, 7, 3, 6, 1, 9, 3, 54, 12, 66, 56, 44, 453, 23, -5};
    priority_queue<int, vector<int>, greater<int>> pq(begin(v), end(v));
    int i = 0;
    while (!pq.empty()) {
        v[i++] = pq.top();
        pq.pop();
    }

    for (int x : v) {
        cout << x << " ";
    }
}