#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        count[0] = 1; // Initialize with count[0] = 1
        int curr_odds = 0, subarrays = 0;
        
        for (int num : nums) {
            if (num % 2 == 1) {
                curr_odds++;
            }
            if (count.find(curr_odds - k) != count.end()) {
                subarrays += count[curr_odds - k];
            }
            count[curr_odds]++;
        }
        
        return subarrays;
    }
};
