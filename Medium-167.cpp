#include <vector>
#include <iostream>

using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int first = 0;
//         int second = 0;
//         vector<int> res;

//         for (int i = 0; i < numbers.size(); i++) {
//             first = i + 1;
//             int remainder = target - numbers[i];
//             for (int j = numbers.size()-1; j > i; j--) {
//                 if (numbers[j] == remainder) {
//                     second = j + 1;
//                     res.push_back(first);
//                     res.push_back(second);
//                     return res;
//                 }
//             }            
//         }
//         return res;
//     }
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int first = 0;
        int second = numbers.size() - 1;
        vector<int> res;

        while (first < second) {
            int sum = numbers[first] + numbers[second];
            if (sum == target) {
                res.push_back(first+1);
                res.push_back(second+1);
                return res;
            }

            if (sum < target) {
                first++;
            } else {
                second--;
            }
        }
        return res;

    }
};