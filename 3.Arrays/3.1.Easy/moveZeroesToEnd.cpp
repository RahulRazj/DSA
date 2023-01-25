#include <iostream>
#include <vector>

using namespace std;

void moveZeroesToEnd(vector<int> &v) {
    int k = 0;
    for(int i = 0; i < v.size(); i++) {
        if(v.at(i) != 0) {
            swap(v.at(k++), v.at(i));
        }
    }
}

int main() {
    vector<int> v{0,1,0,3,12};
    moveZeroesToEnd(v);
    for(const int &el: v) {
        cout << el << " ";
    }
}