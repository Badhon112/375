#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int Array[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> Array[i];
    }
    // reverse(Array,Array+n);
    // for(int i=0;i<n;i++){
    //     cout<<Array[i]<<" ";
    // }
    int first = 1, last = n;
    while (first < last)
    {
        //    Array[first]=
        int temp = Array[first];
        Array[first] = Array[last];
        Array[last] = temp;
        first++;
        last--;
    }
    for(int i=1;i<=n;i++){
        cout<<Array[i]<<" ";
    }
}