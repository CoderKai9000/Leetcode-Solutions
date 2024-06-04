#include <bits/stdc++.h>
using namespace std;

vector<string> summaryRanges(vector<int>& nums) {
    vector<string> result;
    if(nums.empty()) return result;
    int start = nums[0], end = nums[0];
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] == end+1) {
            end = nums[i];
        } else {
            result.push_back(makeRange(start, end));
            start = end = nums[i];
        }
    }
    result.push_back(makeRange(start, end));
    return result;
}

string makeRange(int start, int end) {
    if(start == end) {
        return to_string(start);
    } else {
        return to_string(start) + "->" + to_string(end);
    }
}