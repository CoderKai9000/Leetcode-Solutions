#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long long int sum = 0, patches=0;
        for(int i = 0; i < nums.size(); i++) {
            if(sum >= n) return patches;
            if(nums[i] == 1) {
                // simply add 1
                sum+=1;
                continue;
            } 
            if(nums[i] > sum+1) {
                // need patch
                sum+=sum+1;
                patches++;
                i--;
                continue;
            } else {
                //no need for patch, update sum
                sum+=nums[i];
            }
        }
        if(sum >= n) return patches;
        else {
            while(sum < n) {
                sum+=sum+1;
                patches++;
            }
            return patches;
        }
    }
};