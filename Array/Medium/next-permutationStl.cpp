#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> Array;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Array.push_back(x);
    }
    next_permutation(Array.begin(), Array.end());
    for(int i=0;i<n;i++){
        cout<<Array[i]<<" ";
    }
}