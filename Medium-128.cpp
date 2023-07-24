#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        set<int> arr;
        int count = 1, res = 0;
        for (auto i : nums) {
            arr.insert(i);
        }

        for (auto itr = arr.begin(); itr != arr.end(); itr++) {
            auto nextItr = itr;
            nextItr++;
            if (nextItr != arr.end()) {
                if (abs(*nextItr - *itr) == 1) {
                    count++;
                } else {
                    res = max(res, count);
                    count = 1;
                }
            }
        }
        return max(res, count);
    }
};