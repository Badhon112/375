#include<bits/stdc++.h>
using namespace std;
int main(){
    string S,Ans;
    getline(cin,S);
    for(int i=0;i<S.size();i++){
        if(S[i]!=S[i+1]){
            Ans+=S[i];
        }
    }
    cout<<Ans<<endl;
}