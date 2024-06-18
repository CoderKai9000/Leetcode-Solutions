#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        priority_queue<pair<int,int>> prof_heap;
        priority_queue<pair<int,int>> wrk_heap;
        for(int i = 0; i < profit.size(); i++) {
            prof_heap.push({profit[i], i});
        }
        for(int i = 0; i < worker.size(); i++) {
            wrk_heap.push({worker[i], i});
        }
        int total_profit = 0;
        while(!wrk_heap.empty() && !prof_heap.empty()) {
            if(wrk_heap.top().first >= difficulty[prof_heap.top().second]) {
                total_profit+=prof_heap.top().first;
                wrk_heap.pop();
            } else {
                prof_heap.pop();
            }
        }
        return total_profit;
    }
};