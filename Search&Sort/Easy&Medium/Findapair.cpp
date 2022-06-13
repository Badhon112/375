#include <bits/stdc++.h>
using namespace std;
vector<int> Pair(vector<int> &Array, int value)
{
    int n = Array.size();
    vector<int> Ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {

                if (abs(Array[i] - Array[j]) == value)
                {
                    Ans.push_back(Array[i]);
                    Ans.push_back(Array[j]);
                    return Ans;
                }
            }
        }
    }
    return Ans;
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
    int value;
    cin >> value;

    vector<int> Ans = Pair(Array, value);
    if (Ans.empty())
    {
        cout << "No pair can be added" << endl;
    }
    for (int i = 0; i < Ans.size(); i++)
    {
        cout << Ans[i] << " ";
    }
}