#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1,2,3,4,5};
    int s = 0;
    int e = a.size()-1;

    while(s < e) {
        swap(a[s++],a[e--]);
    }

    for(auto it : a) cout << it << " ";
    return 0;
}