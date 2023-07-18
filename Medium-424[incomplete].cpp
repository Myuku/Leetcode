#include <unordered_map>
#include <iostream>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> map;
        set<char> counter;
        int longestStr = 0;
        char firstChar, secondChar;
        

        int i = 0;
        for (int j = i; j < s.length(); j++) {
            
            map[s[i]]++;
            counter.insert(s[i]);

            if (counter.size() == 1) {
                firstChar = s[i];
                longestStr = max(longestStr, (int)map.size());
            } else if (counter.size() == 2) {
                secondChar = s[i];
                if (min(map[firstChar], map[secondChar]) > k) {
                    i++;
                    map.clear();
                    counter.clear();
                    continue;
                }
                longestStr = max(longestStr, (int)map.size());
            } else {
                map.clear();
                counter.clear();
                continue;
            }
        }
        return longestStr;

    }
};

int main() {

    Solution test;
    string s = "AABABBA";

    cout << test.characterReplacement(s, 1);
}