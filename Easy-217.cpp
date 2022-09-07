#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

//O(2n) Solution
bool containsDuplicate(vector<int>& nums) {
    unordered_map<int,int> hash;

    for (int i = 0; i < nums.size(); i++) {
        hash[nums[i]]++;
    }
    for (auto i : hash) {
        if (i.second > 1) {
            return true;
        }
    }
    return false;
}

//O(n) Solution
bool containsDuplicate(vector<int>& nums) {
    unordered_map<int,int> hash;

    for (int i = 0; i < nums.size(); i++) {
        hash[nums[i]]++;
        if (hash[nums[i]] > 1) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> input = {1,2,3,4};

    containsDuplicate(input) == 0 ? cout << "False" : cout << "True"; 

}