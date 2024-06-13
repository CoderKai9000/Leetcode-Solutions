#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> mp;
        for(int i = 0; i < arr1.size(); i++) {
            mp[arr1[i]]++;
        }
        vector<int> result;
        vector<int> end_stor;
        for(int i = 0; i < arr2.size(); i++) {
            while(mp[arr2[i]] != 0) {
                result.push_back(arr2[i]);
                mp[arr2[i]]--;
            }
        }
        for(int i = 0; i < arr1.size(); i++) {
            while(mp[arr1[i]]) {
                end_stor.push_back(arr1[i]);
                mp[arr1[i]]--;
            }
        }
        sort(end_stor.begin(), end_stor.end());
        for(int i = 0; i < end_stor.size(); i++) {
            result.push_back(end_stor[i]);
        }
        return result;
    }
};