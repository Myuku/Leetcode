#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size = arr.size();
        vector<int> res(size);
        res[size-1] = -1;
        
        for (int i = size-2; i >= 0; i--) {
            res[i] = max(arr[i+1], res[i+1]);
        }
        return res;
    }
};