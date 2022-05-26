#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> Array;
    for(int i=0;i<n;i++){
        string S;
        getline(cin,S);
        Array.push_back(S);
    }
    vector<vector<string>> Ans;
    if(n==0){
        cout<<"[[""]]";
        return 0;
    }
    unordered_map<string,vector<string>> map;
    for(string S:Array){
        string key=S;
        sort(S.begin(),S.end());
        map[key].push_back(S);
    }
    for(auto P:map){
        Ans.push_back(P.second);
    }
    for(int i=0;i<Ans.size();i++){
        for(int j=0;j<Ans[i].size();i++){
            cout<<Ans[i][j]<<" ";
        }
    }

}