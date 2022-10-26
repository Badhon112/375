#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int X, Y; 

        cin >> X >> Y;
        int A=X%Y;
        int B=X/Y;
        cout<<A+B<<endl;
    }
}