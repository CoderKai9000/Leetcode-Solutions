#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.size() < 3) return result;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue; 
            int left = i + 1, right = nums.size() - 1;
            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if(sum > 0) right--;
                else if(sum < 0) left++;
                else {
                    result.push_back({nums[i], nums[left], nums[right]});
                    while(left < right && nums[left] == nums[left + 1]) left++;
                    while(left < right && nums[right] == nums[right - 1]) right--;
                    left++; right--;
                }
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = s.threeSum(nums);
    for(int i = 0; i < result.size(); i++) {
        for(int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}