#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    vector<int> Array;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Array.push_back(x);
    }
    cin>>k;
    sort(Array.begin(),Array.end());
    cout<<Array[n-k]<<endl;
}