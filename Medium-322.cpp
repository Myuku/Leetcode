#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int size = amount + 1, limit = amount + 1;
        int dp[size];
        dp[0] = 0;
        for (int i = 1; i < size; i++) {
            dp[i] = limit;
        }
        
        for (int i = 1; i < size; i++) {
            for (auto c : coins) {
                if (i - c >= 0) {
                    dp[i] = min(dp[i], 1 + dp[i-c]);
                }
            }
        }
        if (dp[amount] != limit) {
            return dp[amount];
        } else {
            return -1;
        }
    }
};