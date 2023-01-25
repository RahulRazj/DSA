#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& v, int start = 0, int end = -1) {
    end = !~end ? v.size() - 1 : end;

    while (start < end)
        swap(v.at(start++), v.at(end--));
}

vector<int> nextPermutation(vector<int>& v) {
    // find the first index from last where v[i - 1] < v[i]
    int ind1 = -1, ind2 = -1;
    for (int i = v.size() - 1; i > 0; i--) {
        if (v.at(i - 1) < v.at(i)) {
            ind1 = i - 1;
            break;
        }
    }

    // find the index from last with value just greater than the ind1 value

    if (ind1 != -1) {
        for (int i = v.size() - 1; i >= 0; i--) {
            if (v.at(i) > v.at(ind1)) {
                ind2 = i;
                break;
            }
        }
    }

    // swap ind1 and ind2 and reverse the array from ind1 to end
    if (ind1 != -1 && ind2 != -1) {
        swap(v.at(ind1), v.at(ind2));
        reverseArray(v, ind1 + 1);
    } else {
        reverseArray(v);
    }

    return v;
}

int main() {
    vector<int> v{1, 2, 3};
    vector<int> res = nextPermutation(v);
    for (const auto& el : res) {
        cout << el << " ";
    }
}