#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;

        for (int i = 0; i <= n; i++) {
            int curr = i;
            res.push_back(0);
            while (curr > 0) {
                if (curr & 1) {
                    res[i]++;
                }
                curr >>= 1;
            }
        }
        return res;
    }
};

// class Solution {
// public:
//     vector<int> countBits(int n) {
        
//         // n+1 as we are going to count from 0 to n
//         vector<int> t(n+1);
//         t[0] = 0;
        
//         // we can compute current set bit count using previous count
//         // as x/2 in O(1) time
        
//         // i%2 will be 0 for even number ans 1 for odd number
        
//         for(int i = 1; i<=n; ++i)
//             t[i] = t[i/2] + i%2;
        
//         return t;
//     }
// };