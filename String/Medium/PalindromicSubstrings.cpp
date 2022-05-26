#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    getline(cin,S);
    vector<string> Array;
    int n=S.size();
    for(int i=0;i<n;i++){
        string ans="";
        for(int j=i;j<n;j++){
            // ans+=S[i];
            ans+=S[j];
            Array.push_back(ans);
        }
    }
  
    int count=0;
    int length=Array.size();
    
    for(int i=0;i<length;i++){
        if(Array[i]==Array[i+1]){
           cout<<pow(length,2);
        }
        else{
        string S=Array[i];
        string P=S;
        reverse(P.begin(),P.end());
        if(S==P){
            count++;
        }
        }
    }
    cout<<count<<endl;
    
}