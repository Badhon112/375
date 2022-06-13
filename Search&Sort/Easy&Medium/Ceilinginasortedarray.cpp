#include <bits/stdc++.h>
using namespace std;
int cailSearch(vector<int> &Array, int x)
{

    for (int i = 0; i < Array.size(); i++)
    {
        if (Array[i] == x)
        {
            return i;
        }
        else if (Array[i] < x && Array[i + 1] > x)
        {
            return i + 1;
        }
    }
    return -1;
}
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
    int x;
    cin >> x;
    int index = cailSearch(Array, x);
}