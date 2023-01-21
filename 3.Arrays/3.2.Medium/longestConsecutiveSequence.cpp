#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int longestConsecutiveSequence(const vector<int>& v) {
    set<int> st(begin(v), end(v));

    int longestSeq = 0;
    int pre = *st.begin();
    int currCount = 0;

    for(const auto &el: st) {
        if(el - pre < 2) {
            currCount++;
        } else {
            currCount = 1;
        }
        pre = el;
        longestSeq = max(longestSeq, currCount);
    }
    return longestSeq;
}

int main() {
    vector<int> v{100, 200, 1, 3, 2, 4};
    cout << longestConsecutiveSequence(v);
}