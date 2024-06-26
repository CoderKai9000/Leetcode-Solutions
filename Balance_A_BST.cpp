#include<bits/stdc++.h>
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
    vector<int> arr;
    
    void inOrder(TreeNode* root) {
        if (root == nullptr) return;
        inOrder(root->left);
        arr.push_back(root->val);
        inOrder(root->right);
    }

    TreeNode* balanceBST(int l, int r) {
        if (l > r) return NULL;
        const int m = (l + r) / 2;
        TreeNode* left = (l > m - 1) ? NULL : balanceBST(l, m - 1);
        TreeNode* right = (m + 1 > r) ? NULL : balanceBST(m + 1, r);
        return new TreeNode(arr[m], left, right);
    }

    TreeNode* balanceBST(TreeNode* root) {
        inOrder(root);
        return balanceBST(0, arr.size() - 1);
    }
};
