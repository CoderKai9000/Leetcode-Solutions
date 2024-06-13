#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char, int> mp1, mp2;
        if(word1.size() != word2.size()) return false;
        for(int i = 0; i < word1.size(); i++) {
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }
        vector<int> v1, v2;
        for(int i = 0; i < word1.size(); i++) {
            v1.push_back(mp1[word1[i]]);
            v2.push_back(mp2[word2[i]]);
        }
        for(int i = 0; i < word1.size(); i++) {
            if(mp2[word1[i]] == 0) return false;
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        for(int i = 0; i < v1.size(); i++) {
            if(v1[i] != v2[i]) return false;
        }
        return true;
    }
};