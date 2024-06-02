#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1,2,3,4,5,6,7};
    int start = 0;
    int end = a.size() - 1;

    while(start <= end) {
        if(start == end){
             cout << a[start] << " ";
             break;
        }
        cout << a[start++] << " " << a[end--] << " ";
    }
    return 0;
}