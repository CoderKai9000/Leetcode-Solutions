#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<int, int> rmp, cmp;
        long long int val1, val2;
        for(int i = 0; i < grid.size(); i++) {
            val1 = 0, val2 = 0;
            for(int j = 0; j < grid[i].size(); j++) {
                val1 = (val1*37 + grid[i][j])%104395289;
                val2 = (val2*37 + grid[j][i])%104395289;
            }
            rmp[val1]++;
            cmp[val2]++;
        }   
        int result = 0;   
        for(auto it: rmp) {
            result += it.second*cmp[it.first];
        }
        return result;
    }
};