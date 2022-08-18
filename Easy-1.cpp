#include <vector>
#include <iostream>
#include <unordered_map>

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


// O(n) Solution
vector<int> twoSum2(vector<int>& nums, int target) {
    unordered_map<int,int> hash;
    vector<int> res;

    for (int i = 0; i < nums.size(); i++) {
        hash[nums[i]] = i;
    }

    for (int j = 0; j < nums.size(); j++) {
        int complement = target - nums[j];
        if (hash.find(complement) != hash.end() && hash[complement] != j) {
            res.push_back(j);
            res.push_back(hash[complement]);
            return res;
        }
    }
    return res;
}


int main() {

    vector<int> list = {2,5,5,90};
    int target = 10;
    vector<int> ans1 = twoSum1(list, target);
    cout << "twoSum1" <<endl;
    for (auto i : ans1) {
        cout << i <<endl;
    }

    vector<int> ans2 = twoSum2(list, target);
    cout << "twoSum2" <<endl;
    for (auto i : ans2) {
        cout << i <<endl;
    }
}