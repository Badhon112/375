#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> Array;
    for (int i = 0; i < m; i++)
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
    vector<int> Ans;
    int dir = 0;
    int down = Array.size() - 1, top = 0, left = 0, right = Array.size() - 1;
    while (top <= down && left <= right)
    {
        if (dir == 0)
        {
            for (int i = left; i <= right; i++)
            {
                Ans.push_back(Array[top][i]);
            }
            top += 1;
        }
        else if (dir == 1)
        {
            for (int i = top; i <= down; i++)
            {
                Ans.push_back(Array[i][right]);
            }
            right -= 1;
        }
        else if (dir == 2)
        {
            for (int i = right; i >= left; i--)
            {
                Ans.push_back(Array[down][i]);
            }
            down -= 1;
        }
        else if (dir == 3)
        {
            for (int i = down; i >= top; i--)
            {
                Ans.push_back(Array[i][left]);
            }
            left += 1;
        }
        dir = (dir + 1) % 4;
    }
    for (int i = 0; i < Ans.size(); i++)
    {
        cout << Ans[i] << " ";
    }
}