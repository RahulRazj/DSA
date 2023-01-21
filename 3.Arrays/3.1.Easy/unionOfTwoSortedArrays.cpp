#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> unionOfTwoArrays(vector<int>& v1, vector<int>& v2) {
    // using sets

    // set<int> st(begin(v1), end(v1));
    // for (const int& el : v2) {
    //     st.insert(el);
    // }
    // return vector<int>(begin(st), end(st));

    // since both the arrays are sorted, we will use two pointers method
    int i = 0, j = 0;
    vector<int> unions{};
    while (i < v1.size() && j < v2.size()) {
        if (v1.at(i) <= v2.at(j)) {
            if (unions.size() == 0 || unions.back() != v1.at(i))
                unions.push_back(v1.at(i));
            i++;
        } else {
            if (unions.size() == 0 || unions.back() != v2.at(j))
                unions.push_back(v2.at(j));
            j++;
        }
    }
    while (i < v1.size()) {
        if (unions.size() == 0 || unions.back() != v1.at(i))
            unions.push_back(v1.at(i));
        i++;
    }
    while (j < v2.size()) {
        if (unions.size() == 0 || unions.back() != v2.at(j))
            unions.push_back(v2.at(j));
        j++;
    }
    return unions;
}

int main() {
    vector<int> v1{1, 2, 3, 4, 5};
    vector<int> v2{1, 2, 3};
    vector<int> unionArray = unionOfTwoArrays(v1, v2);
    for (const int& el : unionArray) {
        cout << el << " ";
    }
}