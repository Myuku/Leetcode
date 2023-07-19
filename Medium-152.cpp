
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int dp[(n*(n+1))/2];
        int count = 0, res = 0, prev = 1;
        
        if (n == 1) return nums[0];

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int calc = prev * nums[j];
                cout << calc << " ";
                if (calc == 0) break;
                res = max(res, calc);
                dp[count] = calc;
                prev = dp[count];
                count++;
            }
            prev = 1;
        }
        return res;
    }
};


int main() {

    Solution test;
    vector<int> n = {-3, 0, 2};
    vector<int> n1 = {-3};

    cout << test.maxProduct(n) << endl;
    cout << test.maxProduct(n1) << endl;
}