#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


bool isPalindrome(string s) {
    string str;

    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i]) || isdigit(s[i])) {
            str.push_back(tolower(s[i]));
        }
    }

    if (str.size() == 0) {
        return true;
    }

    int f = 0, b = str.size()-1;

    while (f <= b) {
        if (str[f] != str[b]) {
            return false;
        }
        f++;
        b--;
    }
    return true;
}

main () {
    string s1 = "A man, a plan, a canal: Panama";
    string s2 = "race a car";
    string s3 = "aa";
    isPalindrome(s1) ? cout<<"True " : cout<<"False ";
    isPalindrome(s2) ? cout<<"True " : cout<<"False ";
    isPalindrome(s3) ? cout<<"True " : cout<<"False ";
}