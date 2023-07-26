#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        set<vector<int>> set;

        int size = nums.size();
        for (int i = 0; i < size-2; i++) {

            int start = i + 1;
            int end = size - 1;

            while (start < end) {
                if ((nums[start] + nums[end] + nums[i]) == 0) {
                    vector<int> temp = {nums[i], nums[start], nums[end]};
                    set.insert(temp);
                    start++;
                    end--;
                } else if (nums[start] + nums[end] + nums[i] > 0) {
                    end--;
                } else {
                    start++;
                }
            }
        }
        for (auto i : set) {
            res.push_back(i);
        }
        return res;
    }
};
