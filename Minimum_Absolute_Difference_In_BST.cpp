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

// class Solution {
// public:

//     int min = 100001;
    
//     TreeNode* inorderPredecessor(TreeNode* root) {
//         if(root == NULL) return NULL;
//         if(root->left == NULL) return NULL;
//         root = root->left;
//         while(root->right != NULL) {
//             root = root->right;
//         }
//         return root;
//     }

//     TreeNode* inorderSuccessor(TreeNode* root) {
//         if(root == NULL) return NULL;
//         if(root->right == NULL) return NULL;
//         root = root->right;
//         while(root->left != NULL) {
//             root = root->left;
//         }
//         return root;
//     }

//     void solve(TreeNode* root) {
//         if(root == NULL) return;
//         TreeNode* ip = inorderPredecessor(root);
//         if(ip != NULL) {
//             if(ip->val-root->val > 0 && min > ip->val-root->val) min = ip->val-root->val;
//             if(ip->val-root->val < 0 && min > root->val - ip->val) min = root->val-ip->val; 
//         }
//         TreeNode* is = inorderPredecessor(root);
//         if(is != NULL) {
//             if(is->val-root->val > 0 && min > is->val-root->val) min = is->val-root->val;
//             if(is->val-root->val < 0 && min > root->val - is->val) min = root->val-is->val; 
//         }
//         if(root->left!= NULL) {
//             if(root->val-root->left->val > 0 && root->val-root->left->val < min) min = root->val-root->left->val;
//             if(root->val-root->left->val < 0 && root->left->val-root->val < min) min = root->left->val-root->val;
//         }
//         if(root->right != NULL) {
//             if(root->val-root->right->val > 0 && root->val-root->right->val < min) min = root->val-root->right->val;
//             if(root->val-root->right->val < 0 && root->right->val-root->val < min) min = root->right->val-root->val;
//         }
//         solve(root->left);
//         solve(root->right);
//     }

//     int getMinimumDifference(TreeNode* root) {
//         solve(root);
//         return min;
//     }
// };

class Solution {
public:

    void solve(TreeNode* curr, int& min, TreeNode** prev) {
        if(curr == NULL) return;
        solve(curr->left, min, prev);
        cout << "curr: " << curr->val;
        if(*prev != NULL) cout << "  prev: " << (*prev)->val << endl;
        else cout << endl;
        if(*prev == NULL) *prev = curr;
        else {
            if(min > curr->val-(*prev)->val) min = curr->val-(*prev)->val;
            *prev = curr;
        }
        solve(curr->right, min, prev);
    }

    int getMinimumDifference(TreeNode* root) {
        int min = 100001;
        TreeNode* prev = NULL;
        solve(root, min, &prev);
        return min;
    }
};