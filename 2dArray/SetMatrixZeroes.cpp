#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> Ans;
    vector<int> r, c;
    for (int i = 0; i < m; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        Ans.push_back(temp);
    }
    for (int i = 0; i < Ans.size(); i++)
    {
        for (int j = 0; j < Ans[i].size(); j++)
        {
            if (Ans[i][j] == 0)
            {
                r.push_back(i);
                c.push_back(j);
            }
        }
    }
    //    row
    for (auto a : r)
    {
        int i = a;
        for (int j = 0; j < Ans[i].size(); j++)
        {
            Ans[i][j] = 0;
        }
    }
    // collum
    for (auto b : c)
    {
        for (int i = 0; i < Ans.size(); i++)
        {
            int j = b;
            Ans[i][j] = 0;
        }
    }
    for(int i=0;i<Ans.size();i++){
        for(int j=0;j<Ans[i].size();j++){
            cout<<Ans[i][j]<<" ";
        }
        cout<<endl;
    }
}