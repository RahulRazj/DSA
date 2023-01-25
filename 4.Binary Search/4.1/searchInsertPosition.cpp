#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums.at(mid) == target) {
            return mid;
        } else if (nums.at(mid) > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int main() {
    vector<int> v{1, 3, 5, 6};
    int target = 5;
    cout << searchInsert(v, target);
}