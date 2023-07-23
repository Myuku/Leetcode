#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int maxVolume = 0;
        int a = 0;
        int b = size - 1;

        while (a < b) {

            maxVolume = max(maxVolume, (b-a)*min(height[b], height[a]));
            if (height[a] < height[b]) {
                a++;
            } else {
                b--;
            }
        }
        return maxVolume;
    }
};