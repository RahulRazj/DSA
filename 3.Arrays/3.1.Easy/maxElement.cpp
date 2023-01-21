#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v{1,5,2,8,4,9,12,345,21,344,52,21,34,44, -9};
    int maxElem = v.at(0);
    for(int x: v) {
        maxElem = max(maxElem, x);
    }
    cout << maxElem;
}