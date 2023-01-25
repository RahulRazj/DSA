#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int>& v) {
    int ans = 0;
    for (const auto& x : v) {
        ans ^= x;
    }
    return ans;
}

int main() {
    vector<int> v{4, 1, 2, 1, 2};
    cout << singleNumber(v);
}