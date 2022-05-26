#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> Ans;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Ans.push_back(x);
    }
    next_permutation(Ans.begin(),Ans.end());
    for(int i=0;i<n;i++){
        cout<<Ans[i]<<" ";
    }
}