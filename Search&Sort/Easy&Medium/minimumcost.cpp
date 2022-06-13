#include<bits/stdc++.h>
using namespace std;
// // 0(1) time 
int Cost(vector<int> &Array,int n){
    int y;
    if(n%2==1){
        y=Array[n/2];
    }
    else{
        y=(Array[n/2]+Array[(n-2)/2])/2;
    }
    int s=0;
    for(int i=0;i<n;i++){
        s+=abs(Array[i]-y);
    }
    return s;
}

//0(n) time

int minCostToMakeElementEqual(vector<int> &Array,int n){
    int low,high;
    low=high=Array[0];
    for(int i=0;i<n;i++){
        low=min(Array[i],low);
        high=max(Array[i],high);
    }
    while ((high-low)>2){
        // int 
    }
    
    
}

int main(){
    int n;
    cin>>n;
    vector<int> Array;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Array.push_back(x);
    }
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     sum+=Array[i]-Array[i+1];
    // }
    // cout<<sum<<endl;
    // cout<<Cost(Array,n)<<endl;
    cout<<minCostToMakeElementEqual(Array,n);
}