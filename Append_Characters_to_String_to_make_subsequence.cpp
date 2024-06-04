#include <bits/stdc++.h>
using namespace std;

// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢢⠀⠀⡄⠀⢠⣄⠀⠰⣄⠀⣿⠀⢀⣾⠀⢀⣾⡇⣰⣿⡇⠀⢀⣴⠆⠀⣠⣴⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣆⢠⡀⠸⣧⡐⢾⣦⣤⣿⣷⣦⣿⣤⣿⣄⣾⣿⣤⣿⣿⣿⣿⣿⣧⣰⣿⣏⣠⣾⣿⣃⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣦⣀⠀⠘⢧⣻⣆⣻⣿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣾⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠲⢄⡀⠈⢻⣷⣦⣈⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣤⣶⣶⣶⣶⣒⣀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠙⢶⣤⣙⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⣿⡴⠒⡂⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣷⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⣤⣶⡯⣠⠖⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣒⣩⠤⣬⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⣭⣾⣯⣁⡀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣉⣩⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠯⢓⣋⣀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⡾⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣋⣉⣀⠄⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣲⣖⣩⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠿⠯⠥⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠿⡿⠯⢛⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣛⣒⣢⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠻⠿⠟⠿⠿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣭⣤⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⣿⣿⣿⣿⣿⡟⢿⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠋⠋⠉⠉⠉⠉⠉⠁⠚⠛⠛⠻⠿⣿⣿⣿⣿⣿⣿⣿⣯⣭⣀⣉⣀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣴⣿⢿⣿⣿⣿⣿⣸⣼⣿⣿⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠀⢀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢛⣿⣿⣿⢿⣿⣿⣿⣿⣷⣠⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⡴⣱⣿⣿⣿⣿⣿⣹⡏⢿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⢸⠀⠀⢸⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⣿⡿⢡⣿⣿⣿⣍⡉⠉⠉⠉⠁⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠀⠽⣿⠟⣿⢿⢧⠟⡇⠘⠛⠢⠤⣀⡀⠀⠀⠀⠀⠀⢧⡀⠘⠀⢀⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠟⠀⢧⣿⣿⣿⣿⢟⠛⠳⢦⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⡇⠘⡜⡇⠀⠀⠀⠀⠀⠀⠉⠓⠦⣤⣀⠀⠀⠇⠀⠀⠏⠀⠀⠀⠀⣀⣠⠤⠐⠒⠚⠉⠀⠀⢘⢧⢧⣯⠻⣦⠂⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠘⡿⢸⠀⣄⠸⣗⠻⣶⣤⣤⣄⠈⠛⣦⠀⠀⠀⠀⣠⡴⠞⠋⢁⣀⣀⡀⣀⡀⠀⠀⠀⢸⣸⢿⣿⡄⠙⠧⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⡜⣆⠸⣷⣌⠷⠬⣙⣉⡿⣦⠀⠈⠇⠀⠀⣰⢏⡀⣰⡟⠛⠿⢋⣹⢆⣤⡴⢀⡾⣫⠃⠀⠙⠿⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢯⣧⢬⡙⠇⠀⠀⠀⠉⠉⠀⠀⠀⠀⠀⠈⠘⠻⠯⣍⠉⠈⠉⠰⠛⣁⣶⣹⡰⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡦⣀⠙⠀⠀⠀⠀⠀⣀⣀⣀⣀⣀⣀⠀⠀⠀⢀⠀⠀⠀⠀⠀⠚⣩⢼⠏⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡇⠈⠑⠀⠀⠀⠀⠀⠀⠉⠛⠿⠿⠿⠟⠋⠉⠉⠀⠀⠀⠀⠀⠊⠁⡞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢱⡄⠀⠀⠀⠀⠀⠀⠀⠀⣼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡜⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣼⣿⣄⠀⠀⠀⠀⠀⠀⠀⠈⠳⠀⠒⠋⠀⠀⠀⠀⠀⠀⠀⢀⣼⢥⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣶⡾⠁⢈⣿⢿⣦⠀⠀⢤⣀⡀⠀⠀⠀⠀⢀⣀⡀⢀⣀⣠⠀⢀⣴⣿⡏⠈⢷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⣿⣿⡿⠁⠀⣼⣿⣿⣯⣷⣄⡀⠀⠈⠉⠭⠭⣽⡯⠿⠏⠀⠀⠀⣰⣿⣿⣿⡇⠀⠘⣿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⣿⣿⣿⣿⣿⡇⠀⠸⣿⣿⣿⣿⣿⣿⣍⠲⠦⣀⡀⠀⠀⠀⣀⣀⡤⣶⣿⣿⣿⣿⣿⣶⠀⠀⣿⣿⣿⣿⣶⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣶⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⢻⣿⣿⣿⣿⣿⣿⣦⣀⠈⠇⠇⠿⡞⠉⣠⣾⣿⣿⣿⣿⣿⣿⠟⠀⠀⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀⠀⠀⠀⠀⠀
// ⠀⠀⠀⠀⠀⠀⢀⣤⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠈⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⠀⠀⢀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣄⠀⠀⠀⠀⠀
// ⠀⠀⠀⢀⣤⣶⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡟⠀⠀⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣦⡀⠀⠀
// ⢀⣤⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠁⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⣀

class Solution {
public:
    int appendCharacters(string s, string t) {
        int s1=0, s2=0, count = t.size();
        if(t.size() == 0) return 0;
        if(s.size() == 0) return t.size();
        while(s1 != s.size() && s2 != t.size()) {
            if(s[s1] == t[s2]) {
                s1++;
                s2++;
                count--;
            } else {
                s1++;
            }
            if(s2 == t.size()) break;
        }
        return count;
    }
};

int main() {
    Solution s;
    cout << s.appendCharacters("coaching", "coding") << endl;
    return 0;
}