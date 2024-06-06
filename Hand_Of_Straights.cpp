#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0) return false;
        multiset<int> cards(hand.begin(), hand.end());
        while (!cards.empty()) {
            int firstCard = *cards.begin();
            for (int i = 0; i < groupSize; ++i) {
                if (cards.find(firstCard + i) == cards.end()) {
                    return false;
                }
                cards.erase(cards.find(firstCard + i));
            }
        }
        return true;
    }
};