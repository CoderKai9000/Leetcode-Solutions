#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        stack<char> st, re;
        for(auto it: s) {
            st.push(it);
        }
        int count = 0;
        while(!st.empty()) {
            if(st.top() == '*') {
                count ++;
                st.pop();
            } else {
                if(count != 0) {
                    st.pop();
                    count--;
                } else {
                    re.push(st.top());
                    st.pop();
                }
            }
        }
        string result = "";
        while(!re.empty()) {
            result.append(1, re.top());
            re.pop();
        }
        return result;
    }
};