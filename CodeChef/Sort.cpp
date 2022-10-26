#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n,Ans=0;
    cin>>n;
    string S;
    cin>>S;
    
    for (int i = 1; i < S.size(); i++)
    {
        if (S[i] == '0' && S[i - 1] == '1')
        {
            Ans++;
        }
    }
    return Ans;
}
int main()
{
    int tesk;
    cin >> tesk;
    while (tesk--)
    {
       cout<<solve()<<endl;;
    }
}