#include <iostream>
#include <unordered_map>

using namespace std;

int lengthOfLongestSubstring(string s) {
    unordered_map<char,int> hash;
    int max = 0;
    int extra = 0;

    for (int i = 0; i < s.size(); i++) {
        if (hash[s[i]] > 0) {
            extra = i - hash[s[i]];
            if (hash.size() > max) {
                max = hash.size();
            }
            hash.clear();
        }
        hash[s[i]] = i+1;
        if (hash.size()+extra > max) {
                max = hash.size()+extra;
        }
    }
    return max;
}

//Answer: so close ugh
int lengthOfLongestSubstring2(string s) {
    int n = int(s.length()), res = 0;
    unordered_map<char, int> mp;

    for (int j = 0, i = 0; j < n; j++){
        if(mp[s[j]] > 0) {
            i = max(mp[s[j]], i);
        }
        res = max(res, j - i + 1);
        mp[s[j]] = j + 1;
    }
    return res;
}



int main() {

    string input = "awdaweadaiwdarxwf";
    cout << lengthOfLongestSubstring2(input) <<endl;
    

}
