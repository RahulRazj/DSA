#include <iostream>
#include <vector>

using namespace std;

int longestSubArrWithSumK_Optimal(vector<int>& v, int k) {
    int start = 0, end = -1, sum = 0, maxLength = 0;
    while (start < v.size()) {
        while ((end + 1 < v.size()) && (sum + v.at(end + 1) <= k))
            sum += v.at(++end);

        if (sum == k)
            maxLength = max(maxLength, (end - start + 1));

        sum -= v.at(start);
        start++;
    }
    return maxLength;
}

int longestSubarrayWithSumK(vector<int>& v, int k) {
    int maxLen = 0;
    for (int i = 0; i < v.size(); i++) {
        int curr = k;
        for (int j = i; j < v.size(); j++) {
            curr -= v.at(j);
            if (curr == 0) {
                maxLen = max(maxLen, j - i + 1);
            } else if (curr < 0) {
                break;
            }
        }
    }
    return maxLen;
}

int main() {
    vector<int> v{7, 1, 6, 0};
    int k = 7;
    cout << longestSubarrayWithSumK(v, k);
}