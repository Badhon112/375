#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S, Ans;
    getline(cin, S);
    int n = S.size();
    // stack<string> Array;
    vector<char> Array(256, -1);
    int maxlen = 0, start = -1;
    for (int i = 0; i < n; i++)
    {
        if (Array[S[i]] > start)
        {
            start = Array[S[i]];
        }
        Array[S[i]] = i;
        maxlen = max(maxlen, i - start);
    }
    cout << maxlen << endl;
}