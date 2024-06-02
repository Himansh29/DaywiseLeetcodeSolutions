#include<bits/stdc++.h>
using namespace std;
void moveZeros(int n, vector<int> &a){
    int j = -1;
    for(int i = 0; i<n; i++) {
        if(a[i] == 0) {
            j = i;
            break;
        }
    }

    if(j == -1) return;

    for(int i = j + 1; i<n; i++) {
        if(a[i] != 0) {
            
        }
    }
}
int main()
{
    vector<int> a = {1,2,0,0,7,9,0,1};
    int n = a.size();
    int zeroCount = 0;
    for(int i = 0; i<n; i++) {
        if(a[i] == 0) {
            auto it = a.begin() + i;
            a.erase(it);
            i--;
            zeroCount++;
        }
    }

    while(zeroCount--) {
        a.push_back(0);
    }
    for(auto it : a) cout << it << " ";
    return 0;
}