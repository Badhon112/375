#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> Array;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string S;
        getline(cin,S);
        Array.push_back(S);
    }
    int count=0,min=100;
    string Str;
    for(int i=0;i<n;i++){
        int len=Array[i].size();
        for(int i=0;i<len;i++){
            if(len<min){
                min=len;
                Str=Array[i];
            }
        }
    }
    for(int i=0;i<min;i++){
        for(int j=0;j<Str.size();j++){
            if(Array[i][j]!=Str[i]){
                cout<<Str.substr(0,count);
            }
        }
        count++;
    }
    cout<<Str.substr(0,count);
}