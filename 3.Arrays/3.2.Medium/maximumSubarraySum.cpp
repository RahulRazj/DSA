#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int maximumSubarraySum(vector<int>& v) {
    bool allNeg = all_of(begin(v), end(v), [](int n) { return n < 0; });
    if (allNeg) {
        return *max_element(begin(v), end(v));
    }

    int maxSoFar = 0;
    int sum = 0;

    for(const auto &el: v) {
        if(sum + el < 0) {
            sum = 0;
        } else {
            sum += el;
            maxSoFar = max(maxSoFar, sum);
        }
    }
    return maxSoFar;
}

int main() {
    vector<int> v{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maximumSubarraySum(v);
}