#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool  solve(TreeNode* left, TreeNode* right) {
        if(left == NULL && right == NULL) return true;
        else if(left == NULL || right == NULL) return false;
        if(left->val == right->val && solve(left->left, right->right) && solve(left->right, right->left)) return true;
        else return false; // this line only avoids the error of "no return value for non void function".
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return solve(root->left, root->right);
    }
};