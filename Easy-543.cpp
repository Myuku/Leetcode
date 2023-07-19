
#include <iostream>

using namespace std;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
private:
    int maxDepth(int &depth, TreeNode* root) {
        if (root == NULL) return 0;
        
        int left = maxDepth(depth, root->left);
        int right = maxDepth(depth, root->right);
        int longest = max(left, right) + 1;
        depth = max(depth, left+right);
        return longest;
        
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int depth = 0;
        maxDepth(depth, root);
        return depth;
    }
};