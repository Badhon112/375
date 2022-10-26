#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, Q;
        cin >> N >> Q;
        vector<int> Ans;
        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            Ans.push_back(x);
            sum+=x;
        }
        while (Q--)
        {
            int l, r;
            cin >> l >> r;
            if((r-l+1)%2==1){
                sum++;
            }
        }
        cout << sum << endl;
    }
}