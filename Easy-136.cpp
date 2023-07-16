#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int total = 0;
        for (auto i : nums) {
            total = total ^ i;
        }
        return total;
    }
};