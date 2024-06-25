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

    void solve(TreeNode* root, TreeNode*& prev) {
        if(root == NULL) return;
        solve(root->right, prev);
        if(prev == NULL) prev = root;
        else {
            root->val = prev->val + root->val;
            prev = root;
        }
        cout << root->val << " ";
        solve(root->left, prev);
    }

    TreeNode* bstToGst(TreeNode* root) {
        TreeNode* prev = NULL;
        solve(root, prev);
        return NULL;
    }
};