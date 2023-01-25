#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target, bool isLast = false) {
    int low = 0, high = nums.size() - 1;
    int index = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums.at(mid) == target) {
            index = mid;
            if (isLast) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        } else if (nums.at(mid) > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return index;
}

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> res{};
    res.push_back(search(nums, target));
    res.push_back(search(nums, target, true));
    return res;
}

int main() {
    vector<int> v{3, 4, 13, 13, 13, 20, 40};
    int target = 13;

    vector<int> res = searchRange(v, target);
    cout << res.at(0) << " " << res.at(1);
}