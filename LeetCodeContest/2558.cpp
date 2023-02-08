#include <bits/stdc++.h>
using namespace std;
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
    int k;
    cin >> k;
    priority_queue<long long> pq;
    for (auto &it : Array)
    {
        pq.push(it);
    }
    long long sum = 0, g;
    while (k--)
    {
        g = sqrt(pq.top());
        pq.pop();
        pq.push(g);
    }
    while (!pq.empty())
    {
        sum += pq.top();
        pq.pop();
    }
    cout << sum << endl;
}