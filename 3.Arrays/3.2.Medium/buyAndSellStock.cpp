#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    int minPrice = INT_MAX;
    for (const auto price : prices) {
        minPrice = min(minPrice, price);
        maxProfit = max(maxProfit, price - minPrice);
    }
    return maxProfit;
}

int main() {
    vector<int> prices{7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices);
}