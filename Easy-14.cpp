#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        int size = strs[0].size();
        
        for (int ctr = 0; ctr < size; ctr++) {
            for (auto s : strs) {
                if (s[ctr] != strs[0][ctr]) {
                    return res;
                }
            }
            res += strs[0][ctr];
        }
        return res;
    }
};