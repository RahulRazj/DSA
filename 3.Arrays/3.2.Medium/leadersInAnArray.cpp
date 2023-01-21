#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> leaders(vector<int>& v) {
    // Code here
    int maxSoFar = v.at(v.size() - 1);
    vector<int> ans{maxSoFar};
    for (int i = v.size() - 2; i >= 0; i--) {
        if (v.at(i) >= maxSoFar) {
            maxSoFar = v.at(i);
            ans.push_back(v.at(i));
        }
    }
    reverse(begin(ans), end(ans));
    return ans;
}

int main() {
    vector<int> v{16, 17, 4, 3, 5, 2};
    vector<int> ans = leaders(v);
    for(const auto &el: ans) {
        cout << el << " ";
    }
}