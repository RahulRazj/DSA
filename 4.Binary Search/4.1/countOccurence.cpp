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

int countOccurence(vector<int>& nums, int target) {
    int fIndex = search(nums, target);
    if(fIndex == -1) return 0;
    int lIndex = search(nums, target, true);
    return lIndex - fIndex + 1;
}

int main() {
    vector<int> v{2, 2 , 3 , 3 , 3 , 3 , 4};
    int target = 3;

    cout << countOccurence(v, target);
}