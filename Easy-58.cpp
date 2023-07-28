#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int suffix;

        for (suffix = s.size()-1; suffix >= 0 && s[suffix] == ' '; suffix--);
        for (int i = suffix; i >= 0; i--) {
            count++;
            if (s[i] == ' ') {
                return count-1;
            }
        }
        return count;
    }
};

// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int count = 0;
//         bool flag = false;

//         for (int i = s.size()-1; i >= 0; i--) {
//             if (!flag) {
//                 if (s[i] != ' ') {
//                     flag = true;
//                     count++;
//                 }
//                 continue;
//             }
//             count++;
//             if (s[i] == ' ') {
//                 return count-1;
//             }
//         }
//         return count;
//     }
// };