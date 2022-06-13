#include <bits/stdc++.h>
using namespace std;
bool Sum(vector<int> &A,vector<int> &B ,int k){
    // bool ans=true;
    if(A.size()!=B.size()){
        return false;
    }
    for(int i=0;i<A.size();i++){
        if(A[i]+B[i]<k){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> A, B;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        B.push_back(x);
    }
    int k;
    cin >> k;
    // bool ans = false;
    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());
    // for (int i = 0; i < n; i++)
    // {
    //     if (A[i] + B[i] >= k)
    //     {
    //         ans = true;
    //     }
    // }
    // cout << ans << endl;
    // for(int i=0;i<n;i++){
    //     cout<<B[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<A[i]<<" ";
    // }
    cout<<Sum(A,B,k);
}