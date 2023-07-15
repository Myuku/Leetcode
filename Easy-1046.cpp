#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
private:
    priority_queue<int, vector<int>, less<int>> pq;

public:
    int lastStoneWeight(vector<int>& stones) {
        for (auto i : stones) {
            pq.push(i);
        }
        while (pq.size() > 1) {
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            
            if (first != second) {
                first -= second;
                pq.push(first);
            } else if (first == second) {
                pq.push(0);
            }
        }
        return pq.top();
    }
};