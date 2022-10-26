#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        if(C%B==0){
            if(A>=C/B){
                cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}