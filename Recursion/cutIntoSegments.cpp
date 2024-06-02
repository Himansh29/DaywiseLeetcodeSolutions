#include<bits/stdc++.h>
using namespace std;
int maxPieces(int rod, int x, int y, int z){
    if(rod == 0) return 0;
    if(rod < 0) return INT_MIN;

    int ans1 = maxPieces(rod-x, x,y,z) + 1;
    int ans2 = maxPieces(rod-y, x,y,z) + 1;
    int ans3 = maxPieces(rod-z, x,y,z) + 1;

    int ans = max(ans1, max(ans2,ans3));
    return ans;
}
int main()
{
    int rod = 7;
    int x = 2, y = 5, z = 2;

    int maxi = maxPieces(rod,x,y,z);
    cout << maxi;
    return 0;
}