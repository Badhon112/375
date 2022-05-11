#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  
    cin>>n;
    int Array[n];
    for(int i=0;i<n;i++){
        cin>>Array[i];
    }
    // int Min=INT_MAX,Max=INT_MIN;
    // for(int i=0;i<n;i++){
    //    Max= max(Max,Array[i]);
    //    Min= min(Min,Array[i]);
    // }
    sort(Array,Array+n);
    // cout<<Min<<" "<<Max<<endl;
    cout<<Array[0]<<" "<<Array[n-1];
}
