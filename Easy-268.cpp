#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = ((nums.size() * (nums.size()+1)) / 2);
        for (auto i : nums) res -= i;
        return res;
    }
};