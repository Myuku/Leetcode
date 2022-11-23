#include <iostream>
#include <unordered_map>
using namespace std;

bool checkInclusion(string s1, string s2) {
    unordered_map<char,int> str;
    unordered_map<char,int> subStr;
    if (s1.size() > s2.size()) {
        return false;
    }

    for (int i = 0; i < s1.size(); i++) {
        str[s1[i]]++;
        subStr[s2[i]]++;
    }
    if (str == subStr) {
        return true;
    }

    for (int i = s1.size(); i < s2.size(); i++) {
        subStr[s2[i-s1.size()]]--;
        if (subStr[s2[i-s1.size()]] == 0) {
            subStr.erase(s2[i-s1.size()]);
        }
        subStr[s2[i]]++;
        if (str == subStr) {
            return true;
        } 
    }
    return false;
}

main () {
    string s1 = "ab", s2 = "eidbaooo";
    checkInclusion(s1, s2) ? cout<<"True " : cout<<"False ";

    string s3 = "ab", s4 = "eidboaoo";
    checkInclusion(s3, s4) ? cout<<"True " : cout<<"False ";
    
    string s5 = "abcdxabcde", s6 = "abcdeabcdx";
    checkInclusion(s5, s6) ? cout<<"True " : cout<<"False ";
    

}