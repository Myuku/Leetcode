#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);
    
        int total = 1, total2 = 1;
    
        for (int left = 0; left < nums.size()-1; left++) {
            total *= nums[left];
            res[left + 1] = total;
        }
        for (int right = nums.size()-1; right > 0; right--) {
            total2 *= nums[right];
            res[right - 1] *= total2;
        }
        
        return res;
    }
};