#include <unordered_map>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
    unordered_map<char, int> heap;
    unordered_map<char, int> waitlist;
public:
    int leastInterval(vector<char>& tasks, int n) {
        for (auto t : tasks) {
            heap[t]++;
            waitlist[t] = 0;
        }

        int count = 0;
        char curr = '\0';
        while (!heap.empty()) {
            flag:
            for (auto it = heap.begin(); it != heap.end();) {
                cout << curr << endl;
                if (waitlist[it->first] < 0) {
                    waitlist[it->first] = n;
                    count++;
                } else if (it->first == curr) {
                    count += n;
                } else {
                    continue;
                }
                curr = it->first;
                heap[it->first]--;
                waitlist[it->first]--;
                if (it->second <= 0) {
                    it = heap.erase(it);
                }
            }
        }
        return count;
    }
};
int main() {

    Solution test;
    vector<char> tasks = {'A','A','A','B','B','B'};
    int n = 2;

    cout << test.leastInterval(tasks, n);
}