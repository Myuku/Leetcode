
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int sPos = nums[0], fPos = nums[0];

        while (true) {
            fPos = nums[nums[fPos]];    
            sPos = nums[sPos];
            if (fPos == sPos) {
                break;
            }
        }
        int sPos2 = nums[0];
        while (sPos2 != sPos) {
            sPos = nums[sPos];
            sPos2 = nums[sPos2];
        }
        return sPos;
    }
};


