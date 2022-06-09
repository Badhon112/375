#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> Array, Ans;
    // int Array[n][m], Ans[n][m];
    for (int i = 0; i < m; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            // cin >> Array[i][j];
            temp.push_back(x);
        }
        Array.push_back(temp);
        temp.clear();
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            Ans[i + j].push_back(Array[j][i]);
        }
    }
    for (int i = 0; i < Ans.size(); i++)
    {
        for (int j = 0; j < Ans[i].size(); j++)
        {
            cout << Ans[i][j] << " ";
        }
        cout << endl;
    }
}