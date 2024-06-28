#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<vector<int>> adj_list(n);
        for(int i = 0; i < roads.size(); i++) {
            adj_list[roads[i][0]].push_back(roads[i][1]);
            adj_list[roads[i][1]].push_back(roads[i][0]);
        }
        // printing the adj list;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < adj_list[i].size(); j++) {
                cout << adj_list[i][j] << " ";
            }
            cout << endl;
        }
        vector<pair<int, int>> freqs(n); // {conns, key}
        for(int i = 0; i < roads.size(); i++) {
            freqs[i] = {adj_list[i].size(),i};
        }
        sort(freqs.begin(), freqs.end());
        vector<int> assigned(n);
        for(int i = 0; i < n; i++) {
            assigned[freqs[i].second] = i+1;
        }
        long long sum = 0;
        for(int i = 0; i < roads.size(); i++) {
            sum+=assigned[roads[i][0]]+assigned[roads[i][1]];
        }
        sum << 1;
        return sum;
    }
};