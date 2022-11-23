#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>
#include <algorithm>

using namespace std;


vector<vector<string>> groupAnagrams(vector<string>& strs) {

    vector<vector<string>> ans;
    unordered_map<string, vector<string>> hash;


    for (int i = 0; i < strs.size(); i++) {
        string s = strs[i];
        sort(strs[i].begin(), strs[i].end());
        hash[strs[i]].push_back(s);
    }

    for (auto i : hash) {
        ans.push_back(i.second);
    }
    return ans;
}

int main() {

    vector<string> list = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> ans = groupAnagrams(list);

    for (auto i : ans) {
        for (auto j : i) {
            cout << j <<endl;
        }
        cout<<endl;
    }

}