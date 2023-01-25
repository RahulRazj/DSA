#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

vector<int> intersectionOfTwoArrays(vector<int>& v1, vector<int>& v2) {
    // using maps
    // map<int, int> mp{};
    // for (const auto& el : v1)
    //     mp[el] = 1;

    // for (const auto& el : v2)
    //     mp[el]++;

    // vector<int> intersection{};
    // for(const auto [key, value]: mp) {
    //     if(value > 1) intersection.push_back(key);
    // }

    // return intersection;

    // since both the arrays are sorted, we will use two pointers method
    int i = 0, j = 0;
    vector<int> unions{};
    while (i < v1.size() && j < v2.size()) {
        if (v1.at(i) < v2.at(j)) {
            i++;
        } else if (v1.at(i) > v2.at(j)) {
            j++;
        } else {
            if (unions.size() == 0 || unions.back() != v1.at(i))
                unions.push_back(v1.at(i));
            i++;
            j++;
        }
    }
    return unions;
}

int main() {
    vector<int> v1{1, 2, 3, 4, 5};
    vector<int> v2{1, 2, 3};
    vector<int> unionArray = intersectionOfTwoArrays(v1, v2);
    for (const int& el : unionArray) {
        cout << el << " ";
    }
}