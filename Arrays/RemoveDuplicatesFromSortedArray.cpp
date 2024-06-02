#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &a, int &n){
    int i = 0; int j = i+1;
    while(j <= n) {
        if(a[i] == a[j]) {
            auto it = a.begin() + j;
            a.erase(it);
            i = j;
            j++;
        } else {
            n = a.size();
            i++;
            j++;
        }
        
    }
    return a.size();
}

int main()
{
    vector<int> a = {1,1,2,3,4,5,5,6,7};
    int n = a.size();

    // for(int i = 1; i<n; i++) {
    //     if(a[i] == a[i-1]){
    //         auto it = a.begin()+i;
    //         a.erase(it);
    //     }
    // }

    // set<int> st;
    // for(auto it : a) {
    //     // st.insert(it);
    //     cout << it << " ";
    // }

    cout << removeDuplicates(a,n); cout << endl;
    for(auto it : a) cout << it << " ";

    // for(auto it : st) cout << it << " ";
    return 0;
}