#include <vector>
#include <iostream>

using namespace std;

// class Solution {
// public:
//     int minCostClimbingStairs(vector<int>& cost) {

//         int size = cost.size();
//         int dp[size+1];
//         dp[0] = cost[0];
//         dp[1] = cost[1];

//         for (int i = 2; i < size; i++) {
//             dp[i] = min(dp[i-1], dp[i-2]) + cost[i];
//         }
//         return min(dp[size-1], dp[size-2]);
//     }
// };

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {

        int size = cost.size();
        int first = cost[0];
        int second = cost[1];

        for (int i = 2; i < size; i++) {
            int temp = min(second, first) + cost[i];
            first = second;
            second = temp;
        }
        return min(second, first);
    }
};