#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, Sum;
    vector<int> Array;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Array.push_back(x);
    }
    vector<int> Ans;
    vector<vector<int>> Ans1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                Sum = Array[i] + Array[j] + Array[k];
                if (Sum == 0)
                {
                    Ans.push_back(Array[i]);
                    Ans.push_back(Array[j]);
                    Ans.push_back(Array[k]);
                }
            }
        }
        Ans1.push_back(Ans);
    }
    for (int i = 0; i < Ans1.size(); i++)
    {

        cout << Ans1[i][i] << " ";
    }
}