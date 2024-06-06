#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int k = x, dig = 0;
        vector<int> V;
        while(k) {
            dig++;
            V.push_back(k%10);
            k /= 10;
        }
        cout << endl;
        int start = 0, end = V.size()-1;
        while(start < end) {
            if(V[start] != V[end]) return false;
            else {
                start++;
                end--;
            }
        } 
        return true;
    }
};

int main() {
    Solution S;
    int x;
    cin >> x;
    cout << S.isPalindrome(x) << endl;
    return 0;
}