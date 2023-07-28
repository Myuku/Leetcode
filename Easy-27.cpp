#include <iostream>
#include <vector>

using namespace std;

// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int last = nums.size()-1, size = nums.size();
//         if (nums.empty()) return 0;
     
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] == val) {
//                 while (nums[last] == val) {
//                     if (last == i) {
//                         nums.erase(nums.begin() + last, nums.end());
//                         return last;
//                     }
//                     last--;
//                 }
//                 swap(nums[last], nums[i]);
//             }
//         }
//         return size;
//     }
// };

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int size = nums.size();
        int index = 0;
        for ( int i = 0; i < size; i++){
            if (nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};