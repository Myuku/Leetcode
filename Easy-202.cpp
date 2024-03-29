
#include <iostream>
#include <string>
#include <math.h>
#include <set>

using namespace std;


class Solution {
public:
    bool isHappy(int n) {
        set<int> visited;
        int val = n;
        while (true) {
            int total = 0;
            string num = to_string(val);
            for (char& i : num) {
                total += pow(int((i - '0')), 2);
            }
            if (total == 1) {
                return true;
            }
            if (visited.find(total) == visited.end()) {
                visited.insert(total);
                val = total;
            } else {
                return false;
            }
        }
    }
};

// // Alt Solution
// class Solution {
// public:
//     bool isHappy(int n) {
//         set<int> visited;
//         int val = n;
//         while (val != 1 && !visited.count(val)) {
//             int total = 0;
//             string num = to_string(val);
//             for (char& i : num) {
//                 total += pow(int((i - '0')), 2);
//             }
//             visited.insert(val);
//             val = total;
//         }
//         return val == 1;
//     }
// };



int main() {

    Solution test;
    int n = 19;

    cout << test.isHappy(n);
}