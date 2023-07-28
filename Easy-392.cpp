#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.empty()) return true;
        auto itr = s.begin();
        for (auto i : t) {
            if (i == *itr) {
                itr++;
                if (itr == s.end()) {
                    return true;
                }
            }
        }
        return false;
    }  
};