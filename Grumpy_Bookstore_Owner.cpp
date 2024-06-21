#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        if(customers.size() == 1) {
            if(minutes >= 1) {
                return customers[0];
            } else {
                if(grumpy[0] == 0) return customers[0];
                else return 0;
            }
        }
        int sum = 0, grumpy_sum = 0;
        int start = 0, end = 0;
        int max_diff_till_now = 0;
        while(end < minutes) {
            sum+=customers[end];
            if(grumpy[end] == 0) grumpy_sum+=customers[end];
            end++;
        }
        end--;
        max_diff_till_now = sum-grumpy_sum;
        while(end < customers.size()-1) {
            if(sum-grumpy_sum > max_diff_till_now) max_diff_till_now = sum-grumpy_sum;
            sum+=customers[end+1];
            sum-=customers[start];
            if(grumpy[end+1] == 0) grumpy_sum+=customers[end+1];
            if(grumpy[start] == 0) grumpy_sum-=customers[start];
            start++;
            end++;
        }
        if(sum-grumpy_sum > max_diff_till_now) max_diff_till_now = sum-grumpy_sum;
        int total_grumpy_sum = 0;
        for(int i = 0; i < customers.size(); i++) {
            if(grumpy[i] == 0) total_grumpy_sum+=customers[i];
        }
        return total_grumpy_sum+max_diff_till_now;
    }
};