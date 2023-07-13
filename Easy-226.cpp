#include <iostream>
#include <vector>
#include <algorithm>
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


TreeNode* invertTree(TreeNode* root) {
    if (root == NULL) {
        return NULL;
    }
    if (root->right == NULL && root->left == NULL) {return root;}

    swap(root->right, root->left);
    invertTree(root->right);
    invertTree(root->left);
    return root;
}