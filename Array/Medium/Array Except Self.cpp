#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> Array, Ans;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Array.push_back(x);
    }
    // int sum = 1, index = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum=1;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i!=j)
    //         {
    //             sum *= Array[j];
    //         }

    //     }
    //     Ans.push_back(sum);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << Ans[i] << " ";
    // }

    if (n < 1)
    {
        cout << 0 << endl;
    }
    // Ans =1;
    int sum=1;
    for(int i=0;i<n;i++ ){
        sum*=Array[i];
        Ans.push_back(sum);
    }
    sum=1;
    for(int i=n-1;i>0;i--){
        Ans[i]=Ans[i-1]*sum;
        sum*=Array[i];
    }
    Ans[0]=sum;
}