#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> Array;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Array.push_back(x);
    }
    int target, pos;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (Array[i] == target)
        {
            pos = i;
        }
    }
    cout << pos << endl;
}