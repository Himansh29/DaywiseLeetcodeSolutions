#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> res;
    unordered_set<string> st;

    void solve(int i, string currSentance, string s) {
        if(i >= s.length()) {
            res.push_back(currSentance);
            return;
        }

        for(int j = i; i< s.length(); j++) {
            string tempWord = s.substr(i, j-i+1);
            if(st.count(tempWord)) {
                
                string tempSec = currSentance;
                if(!currSentance.empty()) {
                    currSentance += " ";
                }
                currSentance += tempWord;
                solve(j+1, currSentance, s);
                currSentance = tempSec;
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        for(string& word : wordDict) {
            st.insert(word);
        }
        string currSentence = "";

        solve(0, currSentence, s);

        return res;
    }
};
int main()
{


    return 0;
}