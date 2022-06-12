#include <bits/stdc++.h>
using namespace std;
void MergeTwo(vector<int> &Array1, vector<int> &Array2)
{
    int n = Array1.size(), m = Array2.size();
    vector<int> All;
    for (int i = 0; i < Array2.size(); i++)
    {
        Array1.push_back(Array2[i]);
    }
    All.assign(Array1.begin(), Array1.end());
    sort(All.begin(), All.end());
    Array1.clear();
    Array2.clear();
    for(int i=0;i<n;i++){
        Array1[i]=All[i];
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> Array1, Array2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Array1.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        Array2.push_back(x);
    }
    MergeTwo(Array1, Array2);
}