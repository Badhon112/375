#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> Array, Rotate;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        Array.push_back(temp);
    }
    for (int i = 0; i < n; i++)
    {
        int temp;
        for (int j = 0; j < i / 2; j++)
        {
            if (i != j)
            {
                swap(Array[i][j], Array[j][i]);
            }
        }
    }
    int s = 0, e = Array[0].size() - 1;
    while (s < e)
    {
        for (int i = 0; i < Array.size(); i++)
        {
            swap(Array[i][s], Array[i][e]);
        }
        s++;
        e--;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << Array[i][j] << " ";
        }
        cout << endl;
    }
}