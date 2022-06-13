#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> Array,Ans;
    for(int i=0;i<n;i++){
        int n;
        cin>>n;
        Array.push_back(n);
    }
    int sum=1;
    for(int i=0;i<n;i++){
        sum=1;
        for(int j=0;j<n;j++){
            if(i!=j){
                sum*=Array[j];
            }
        }
        Ans.push_back(sum);
    }
    for(int i=0;i<Ans.size();i++){
        cout<<Ans[i]<<" ";
    }

}