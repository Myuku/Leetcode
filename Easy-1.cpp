#include <vector>
#include <iostream>

using namespace std;

// O(n^2) Solution
vector<int> twoSum1(vector<int>& nums, int target) {
    int first = 0;
    int second = 0;
    vector<int> res;

    for (int i = 0; i<nums.size(); i++) {
        for (int j = 0; j<nums.size(); j++) {
            int first = nums[i];
            int second = nums[j];
            
            if (i != j) {
                if ((first+second) == target) {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
    }
    return res;
}


int main() {

    vector<int> list = {3,2,4};
    int target = 6;
    vector<int> ans = twoSum1(list, target);
    for (auto i : ans) {
        cout << i <<endl;
    }
}