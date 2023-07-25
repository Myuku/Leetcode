#include <vector>
#include <iostream>
#include <queue>
#include <map>

using namespace std;

// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         vector<int> res;
//         vector<pair<int,int>> items;
//         map<int, int, less<int>> hash;

//         for (auto i : nums) {
//             hash[i]++;
//         }
//         for (auto i : hash) {
//             items.push_back(pair(i.second, i.first));
//         }
//         sort(items.rbegin(), items.rend());

//         for (int i = 0; i < k; i++) {
//             res.push_back(items[i].second);
//         }
//         return res;
//     }
// };

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        priority_queue<pair<int,int>> pq;
        map<int, int, less<int>> hash;

        for (auto i : nums) {
            hash[i]++;
        }
        for (auto i : hash) {
            pq.push(pair(i.second, i.first));
        }
        int count = 0;
        while (count < k) {
            res.push_back(pq.top().second);
            pq.pop();
            count++;
        }
        return res;
    }
};