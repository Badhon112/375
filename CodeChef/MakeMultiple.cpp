#include <bits/stdc++.h>
using namespace std;
void solve()
{
     int A=0,B=0;
        cin>>A>>B;
        if(B%A){
            if(B>(2*A)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"YES"<<endl;
        }
}
int main()
{
    int tesk;
    cin >> tesk;
    while (tesk--)
    {
        solve();
    }
}