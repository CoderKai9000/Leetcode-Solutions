#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==1 || c==0) return true; 
        long long int start = 0, end = (int)sqrt(c);
        while(start <= end) {
            if(start*start + end*end < c) start++;
            else if(start*start + end*end > c) end--;
            else return true;
        }
        return false;
    }
};

int main() {
    int c;
    cin >> c;
    Solution s;
    cout << s.judgeSquareSum(c) << endl;
}