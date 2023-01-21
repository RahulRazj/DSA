#include <iostream>
#include <vector>

using namespace std;

int secondLargestElement(vector<int>& v) {
    int maxVal = INT_MIN;
    int secondMaxVal = INT_MIN;
    for (int i = 0; i < v.size(); i++) {
        if (v.at(i) > maxVal) {
            secondMaxVal = maxVal;
            maxVal = v.at(i);
        } else if (v.at(i) > secondMaxVal && v.at(i) < maxVal) {
            secondMaxVal = v.at(i);
        }
    }
    return secondMaxVal;
}

int main() {
    vector<int> v{1, 5, 2, 8, 4, 9, 12, 344, 21, 345, 52, 21, 34, 44, -9};
    cout << secondLargestElement(v);
}
