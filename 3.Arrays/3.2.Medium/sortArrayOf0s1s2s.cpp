#include <iostream>
#include <vector>

using namespace std;

void sortArray(vector<int>& v) {
    int low = 0, mid = 0, high = v.size() - 1;

    while (mid <= high) {
        if (v.at(mid) == 2) {
            swap(v.at(mid), v.at(high--));
        } else if (v.at(mid) == 0) {
            swap(v.at(mid), v.at(low));
            low++;
            mid++;
        } else {
            mid++;
        }
    }
}

int main() {
    vector<int> v{0, 2, 1, 2, 1, 0, 0, 1};
    sortArray(v);
    for (const auto& x : v) {
        cout << x << " ";
    }
}