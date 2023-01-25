#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& v, int target) {
    int low = 0, high = v.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (v.at(mid) == target)
            return mid;
        else if (v.at(mid) > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    vector<int> v{1, 3, 6, 8, 12, 45, 67, 234, 245, 334};
    int target = 334;
    cout << binarySearch(v, target);
}