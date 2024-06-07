#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> mp;
        for(int i = 0; i < dictionary.size(); i++) {
            mp.insert(dictionary[i]);
        }
        string temp;
        vector<string> sen;
        int count = 0;
        for(int i = 0; i < sentence.size(); i++) {
            if(sentence[i] == ' ') {
                count++;
                sen.push_back(temp);
                temp = "";
            } else {
                temp.append(1, sentence[i]);
            }
        }
        if(count == 0) {
            sen.push_back(sentence);
        }
        else sen.push_back(temp);

        //print out the vector
        for(int i = 0; i < sen.size(); i++) {
            cout << sen[i] << " ";
        }
        cout << endl;
        //stop printing

        for(int i = 0; i < sen.size(); i++) {
            temp = "";
            for(int j = 0; j < sen[i].size(); j++) {
                temp.append(1, sen[i][j]);
                if(mp.find(temp) != mp.end()) {
                    sen[i] = temp;
                    break;
                }
            }
        }
        string result;
        for(int i = 0; i < sen.size(); i++) {
            result.append(sen[i]);
            if(i != sen.size()-1) result.append(1, ' ');
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<string> dictionary = {"cat", "bat", "rat"};
    string sentence = "the cattle was rattled by the battery";
    cout << s.replaceWords(dictionary, sentence) << endl;
    return 0;
}