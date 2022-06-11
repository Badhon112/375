#include <bits/stdc++.h>
using namespace std;
int Adjacentdiffer(vector<int> &Array, int k, int x)
{
    // for(int i=0;i<Array.size()-1;i++){
    //     if((Array[i]-Array[i+1])>=k && (Array[i]-Array[i-1])>=k){
    //         return i;
    //     }
    // }
    // return 0;
    int i = 0, n = Array.size();
    while (i < n)
    {
        if (Array[i] == x)
        {
            return i;
        }
        i = i + max(1, abs(Array[i] - x) / k);
    }
    return -1;
}
int main()
{
    int n, k, x;
    cin >> n;
    vector<int> Array;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Array.push_back(x);
    }
    cin >> k >> x;
    cout << Adjacentdiffer(Array, k, x) << endl;
}