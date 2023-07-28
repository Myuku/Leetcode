#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> res = nums;
        copy(nums.begin(), nums.end(), back_inserter(res));
        return res;
    }
};