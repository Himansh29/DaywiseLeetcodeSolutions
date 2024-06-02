#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1,2,3};

    for(int i = 0; i<6; i++) {
        next_permutation(a.begin() , a.end());
        for(auto it : a) cout << it << " ";
        cout << endl;
    }

    

    // for(auto it : a) cout << it << " ";
    return 0;
}