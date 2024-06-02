#include <bits/stdc++.h>

using namespace std;

int main()
{
    // pair<int,pair<int,int>> a = {1,{2,3}};
    
    // cout << a.first << " " << a.second.first << " " << a.second.second;
    
    vector<int> v = {1,2,3,4,5};
    
    // v.erase(v.begin()+1);
    // v.insert(v.begin() + 1, 20);
    
    // for(auto it : v) cout << it << " ";
    
    priority_queue<int> q;
    q.push(5);
    q.push(2);
    q.push(1);
    q.push(10);
    q.push(0);
    cout << q.top() << endl;
    while(!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    

    return 0;
}