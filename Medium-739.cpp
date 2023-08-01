#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        stack<pair<int, int>> stk;
        vector<int> res(size, 0);

        for (int i = 0; i < size; i++) {
            while (!stk.empty() && temperatures[i] > stk.top().first) {
                res[stk.top().second] = i - stk.top().second;
                stk.pop();
            }            
            if (stk.empty() || temperatures[i] <= stk.top().first) {
                stk.push(pair(temperatures[i], i));
            }
        }
        return res;
    }
};