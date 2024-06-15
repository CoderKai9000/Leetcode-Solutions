#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue<pair<int, int>> mh;
        priority_queue<pair<int, int>> MH;
        for(int i = 0; i < profits.size(); i++) {
            mh.push({-capital[i], profits[i]});
        }
        for(int i = 0; i < k; i++) {
            while(-mh.top().first <= w && !mh.empty()) {
                MH.push({mh.top().second, mh.top().first});
                mh.pop();
            }
            if(MH.empty()) break;
            w+=MH.top().first;
            MH.pop();
        }
        return w;
    }
};