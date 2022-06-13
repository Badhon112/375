#include <bits/stdc++.h>
using namespace std;
int ReverseArray(vector<int> &Array)
{
    int n = Array.size();
    for (int i = 0; i < n; i++)
    {
        vector<int> temp(n, 0);
        vector<int> Rev(n, 0);
        for (int j = i; j < n; j++)
        {
            // int x = Array[j];
            temp.push_back(Array[j]);
        }
        Rev.assign(temp.begin(), temp.end());
        reverse(Rev.begin(), Rev.end());
        if (Rev == temp)
        {
            return true;
        }
    }
    return false;
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
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){

    //     }
    // }
    cout << ReverseArray(Array);
}