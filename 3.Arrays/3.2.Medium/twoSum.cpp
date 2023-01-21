#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res{};
    unordered_map<int, int> mp{};

    for (int i = 0; i < nums.size(); i++) {
        if (mp.find(target - nums.at(i)) == mp.end()) {
            mp.insert({nums.at(i), i});
        } else {
            res.push_back(i);
            res.push_back(mp[target - nums.at(i)]);
            break;
        }
    }
    return res;
}

int main() {
    vector<int> v{2, 7, 11, 15};
    int target = 9;
    vector<int> res = twoSum(v, target);
    for (const auto el : res) {
        cout << el << " ";
    }
}