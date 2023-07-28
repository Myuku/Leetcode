#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if (numRows == 1) {
            return {{1}}; 
        }

        vector<vector<int>> res = generate(numRows-1);
        vector<int> arr(res.size()+1, 1);
        for (int i = 1; i < res.size(); i++) {
            arr[i] = res[res.size()-1][i-1] + res[res.size()-1][i];
        }
        res.push_back(arr);
        return res;
    }
    
};