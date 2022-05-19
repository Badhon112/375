#include<bits/stdc++.h>
using namespace std;
int main(){
    string S,Ans,S1;
    getline(cin,S);
    int n=S.size();
    for(int i=0;i<n;i++){
        if(isalnum(S[i])){
            S1+=S[i];
        }
    }
    
    int ans=0;
    for(int i=0;i<S1.size();i++){
        if(S1[i]!=S1[n-i-1]){
            ans=1;
            break;
        }
    }
    if(ans==1){
       cout<<"Not Pal";
    }
    else{
         cout<<"Pal";
    }
}