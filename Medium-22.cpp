
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
private:
    void findCombinations(int open, int close, vector<string> &res, string str) {
        if (open == 0 && close == 0) {
            res.push_back(str);
            return;
        }
        if (open > 0) {
            findCombinations(open - 1, close, res, str + '(');
        }
        // Only generate a sequence with a ')' if close > open so that it always ends with ')'
        if (close > 0 && close > open) {
            findCombinations(open, close - 1, res, str + ')');
        }

    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res; 
        string str = "";
        findCombinations(n, n, res, str);
        return res;
    }
};