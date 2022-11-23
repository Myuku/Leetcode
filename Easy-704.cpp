
#include <vector>
#include <iostream>

using namespace std;


int search(vector<int>& nums, int target) {
    int first = 0;
    int last = nums.size()-1;

    // if (nums.size() == 1) {
    //     if (nums[0] == target) {
    //         return 0;
    //     } else {
    //         return -1;
    //     }
    // }

    while (first <= last) {
        int middle = first + ((last - first) / 2);

        if (nums[middle] == target) {
            return middle;
        } else if (target > nums[middle]) {
            first = middle + 1;
        } else {
            last = middle - 1;
        }
    }
    return -1;
}

main() {
    vector<int> nums = {12};
    int target = 12;

    cout << search(nums, target) << endl;
}