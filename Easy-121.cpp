#include <vector>
#include <iostream>

using namespace std;
#define MAX_VALUE 9999999;

int maxProfit(vector<int>& prices) {
    int least = MAX_VALUE;
    int profit = 0;
    int currProfit = 0;

    for (int i = 0; i < prices.size(); i++) {
        if (prices[i] < least) {
            least = prices[i];
        } 
        if (prices[i] != least) {
            currProfit = prices[i] - least;
        }
        if (currProfit > profit) {
            profit = currProfit;
        }
    }
    return profit;
}

main() {
    vector<int> prices1 = {7,1,5,3,6,4};
    vector<int> prices2 = {7,6,4,3,1};

    cout << maxProfit(prices1) << endl;
    cout << maxProfit(prices2) << endl;
}