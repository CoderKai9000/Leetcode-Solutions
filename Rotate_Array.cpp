#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k > nums.size()) k = k%nums.size();
        vector<int> result;
        for(int i = nums.size()-k; i < nums.size(); i++) {
            result.push_back(nums[i]);
        }
        for(int i = 0; i < nums.size()-k; i++) {
            result.push_back(nums[i]);
        }
        for(int i = 0; i < nums.size(); i++) {
            nums[i] = result[i];
        }
    }
};