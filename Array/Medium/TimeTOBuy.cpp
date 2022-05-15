#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    // int Array[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> Array[i];
    // }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     Array[i] = Array[i + 1];
    // }
    // int maxc=0;
    // int maxindex = 0, minindex = 0, minvalue = Array[0], maxvalue = Array[0];
    // for (int i = 2; i < n ; i++)
    // {
    //     if (minvalue > Array[0])
    //     {
    //         minvalue = Array[i];
    //         minindex = i;
    //     }
    //     if (maxindex < Array[0])
    //     {
    //         maxvalue = Array[i];
    //         maxindex = i;
    //     }
    //     // maxc=max(Array[i],maxc);
    // }
    // cout << minvalue<<minindex<<maxvalue<<minvalue;
    int n;
    cin>>n;
    vector<int> Array;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Array.push_back(x);
    }
    int maxpro=0;
    int minprice=INT_MAX;
    for(int i=0;i<n;i++){
        minprice=min(minprice,Array[i]);
        maxpro=max(maxpro,Array[i]-minprice);
    }
    cout<<maxpro<<endl;
}