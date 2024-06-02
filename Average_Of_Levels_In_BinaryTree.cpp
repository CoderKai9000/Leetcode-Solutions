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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q1, q2;
        vector<double> result;
        q1.push(root);
        long int sum = 0, nodecnt = 0;
        double average;
        while(!q1.empty()) {
            sum = 0;
            nodecnt = 0;
            average = 0.0;
            while(!q1.empty()) {
                sum+=q1.front()->val;
                nodecnt++;
                q2.push(q1.front());
                q1.pop();
            }
            average = ((double)sum)/((double)nodecnt);
            result.push_back(average);
            while(!q2.empty()) {
                if(q2.front()->left != NULL)q1.push(q2.front()->left);
                if(q2.front()->right != NULL)q1.push(q2.front()->right);
                q2.pop();
            }
        }
        return result;
    }
};