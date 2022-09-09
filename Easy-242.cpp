#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

//O(n) Solution. Takes up more space as there are two hashmaps
bool isAnagram(string s, string t) {
    unordered_map<char,int> s_hash;
    unordered_map<char,int> t_hash;

    if (s.length() != t.length()) {
        return false;
    }
    for (int i = 0; i < s.length(); i++) {
        s_hash[s[i]]++;
        t_hash[t[i]]++;
    }
    if (t_hash != s_hash) {
        return false;
    }
    return true;
}

//O(2n) Solution. Reduced Space usage
bool isAnagram2(string s, string t) {
    unordered_map<char,int> hash;

    if (s.length() != t.length()) {
        return false;
    }
    for (int i = 0; i < s.length(); i++) {
        hash[s[i]]++;
        hash[t[i]]--;
    }
    for (auto i : hash) {
        if (i.second != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    string input = "apple";
    string jnput = "pape";
    isAnagram(input, jnput) == 0 ? cout << "False" : cout << "True"; 

}