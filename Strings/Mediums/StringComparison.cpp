#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> temp = chars;
        chars.erase(chars.begin() , chars.end());

        for(int i = 0; i<temp.size(); i++) {
            char ch = temp[i];
            int counter = 0;
            for(int j = i+1; j<temp.size(); j++) {
                if(temp[j] == ch) {
                    counter++;
                }
            }
            chars.push_back(ch);
            string cnt = to_string(ch);
            chars.push_back((cnt[0]));
        }
        return chars.size();

    }
};
int main()
{
    cout << "Hello";
    return 0;
}