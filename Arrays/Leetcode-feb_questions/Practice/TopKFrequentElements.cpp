#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
            vector<int> ans;
           
            unordered_map<int,int> mp;
            
            for(int &it : nums) mp[it]++;
            
            priority_queue<P, vector<P>, greater<P>> pq;

            for(auto &it : mp) {
                int value = it.first;
                int freq = it.second;

                pq.push({freq, value});

                if(pq.size() > k) {
                    pq.pop();
                }
            }
        
            while(!pq.empty()) {
                ans.push_back(pq.top().second);
                pq.pop();
            }
            
            return ans;
    }
};
int main()
{

    vector<int> a = {3,2,3,1,2,4,5,5,6};

    int n = a.size();
    int sum = ((n*(n+1))/2);
    cout << sum;

    

    
    
    return 0;
}