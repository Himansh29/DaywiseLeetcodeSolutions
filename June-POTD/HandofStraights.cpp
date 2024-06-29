#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n % groupSize != 0) return false;

        unordered_map<int,int> mp;
        for(auto it: hand) mp[it]++;
        bool flag = true;
        for(int i = 0; i<n; i++) {
                
            vector<int> el;
            int element = hand[i];
            if(mp[element] <= 0) continue;

            for(int j = 0; j<groupSize; j++) {
                int number = element + j;
                if(mp.find(number) != mp.end() && mp[number] > 0) {
                    el.push_back(number);
                    mp[number]--;
                }else{
                    flag = false;
                }
            }
            for(int k = 0; k<groupSize; k++) {
                cout << el[k] << " ";
            }cout << endl;
            el.erase(el.begin() , el.end());
        }
        return flag;
    }
};
int main()
{
    return 0;
}