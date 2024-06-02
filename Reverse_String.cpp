#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
		int start = 0, end = s.size()-1;
		char temp;
  		for(int i = 0; i < s.size()/2; i++) {
			temp = s[start];
			s[start] = s[end];
			s[end] = temp;
		}
		start++;
		end--;
    }
};
