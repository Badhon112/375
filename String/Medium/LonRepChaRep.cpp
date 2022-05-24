#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S, Ans;
    getline(cin, S);
    int n, start = 0;
    cin >> n;
    int length = S.size();
    vector<char> Array;
    for (int i = 0; i < length; i++)
    {
        Array[S[i]]++;
    }
    int Max_value=INT_MIN;
    for(int i=0;i<Array.size();i++){
        // Max_value=max(Max_value,Array[i]);
    }
    cout<<Max_value<<endl;

}