#include<bits/stdc++.h>
using namespace std;

/*
1002. Find Common Characters
Easy

3918

346

Add to List

Share
Given a string array words, return an array of all characters that show up in all strings within the words (including duplicates). You may return the answer in any order.

 

Example 1:

Input: words = ["bella","label","roller"]
Output: ["e","l","l"]
Example 2:

Input: words = ["cool","lock"
*/

class Solution {
public:

    void fillCountArray(string s, int count[26]) {
        for(char &ch : s) {
            count[ch-'a']++;
        }
    }

    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        int n = words.size();

        int count[26] = {0};

        fillCountArray(words[0], count);

        for(int i = 1; i<n; i++) {
            int temp[26] = {0};
            fillCountArray(words[i], temp);

            for(int j = 0; j<26; j++) {
                count[j] = min(count[j], temp[j]);
            }
        }

        for(int i = 0; i<26; i++) {
            int c = count[i];
            while(c--) {
                ans.push_back(string(1, i + 'a'));
            }
        }

        return ans;
    }
};
int main()
{
    return 0;
}