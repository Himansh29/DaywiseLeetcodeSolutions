#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1,2,4,4,4,4,5,6,6,6,6,6,6};

    // Rotate elements in a array/vector 
    // rotate(a.begin(), a.begin() + 3, a.end());

    auto it = unique(a.begin(), a.end());
    a.erase(it, a.end());
    for(auto it : a) cout << it << " ";
    return 0;
}