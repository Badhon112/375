#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    getline(cin,S);
    map<char,int> Ans;
    for(int i=0;i<S.size();i++){
        Ans[S[i]]++;
    }
    for(auto it:Ans){
        if(it.second>1){
            cout<<it.first<<" , count : "<<it.second<<endl;;
        }
    }
}