#include <bits/stdc++.h>
using namespace std;
vector<int> moveZerosToEnd(vector<int> &a)
{
    int n = a.size();
    int i = -1;

    for (int j = 0; j < n; i++)
    {
        if (a[j] == 0)
        {
            i = j;
            break;
        }
    }

    if (i == -1)
        return a;

    for (int j = i + 1; j < n; j++)
    {
        if (a[j] != 0)
        {
            swap(a[i++], a[j]);
        }
    }

    return a;
}
int main()
{
    vector<int> a = {0, 1, 0, 3, 12};
    int n = a.size();
    moveZerosToEnd(a);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}