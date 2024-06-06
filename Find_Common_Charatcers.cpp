#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result;
        vector<vector<int>> V (words.size(), vector<int>(26, 0));
        for(int i = 0; i < words.size(); i++) {
            for(int j = 0; j < words[i].size(); j++) {
                V[i][words[i][j]-97]++;
            }
        }
        int count = 0, freq = 0;
        for(int i = 0; i < 26; i++) {
            count = 0;
            freq = 0;
            for(int j = 0; j < words.size(); j++) {
                if(V[j][i] != 0) {
                    count++;
                    if(freq == 0) freq = V[j][i];
                    else {
                        if(V[j][i] < freq) freq = V[j][i];
                    }
                }
            }
            if(count == words.size()) {
                string s(1, (char)(i+97));
                while(freq--) result.push_back(s); 
            }
        }
        return result;
    }
};