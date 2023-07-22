
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<char, int> check;
        int size = 9;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (board[i][j] != '.') {
                    if (++check[board[i][j]] > 1) return false;
                }
                if (board[j][i] != '.') {
                    if (++check[(board[j][i]+'a')] > 1) return false;
                }
            }
            check.clear();
        }

        for (int top = 0; top < size; top += 3) {
            int bot = top + 3;
            for (int start = 0; start < size; start += 3) {
                int end = start + 3; 
                for (int y = top; y < bot; y++) {
                    for (int x = start; x < end; x++) {
                        if (board[y][x] != '.') {
                            check[board[y][x]]++;
                        }
                        if (check[board[y][x]] > 1) {
                            return false;
                        }
                    }
                }
                check.clear();
            }
        }
        return true;
    }
};