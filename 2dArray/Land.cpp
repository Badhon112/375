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
    int land=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(Array[i][j]==1 && Array[i+1][j]==0 && Array[i-1][j]==0 && Array[i][j-1]==0 && Array[i][j+1]==0){
                land++;
            }
        }
    }
    cout<<land<<endl;
}