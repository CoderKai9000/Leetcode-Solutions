#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int late_count = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' ') {
                if(count != 0) late_count = count;
                count = 0;
            } else {
                count++;
            }
        }
        if(s[s.size()-1] == ' ')return late_count;
        else return count;
    }
};