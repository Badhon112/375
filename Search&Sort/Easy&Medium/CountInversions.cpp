#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> Array;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Array.push_back(x);
    }
    int count=1;
    int fig=0;
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         if(Array[j]>Array[j+1]){
    //             swap(Array[i],Array[i+1]);
    //             count++;
    //             fig=1;
    //         }
    //     }
    //     if(fig==0){
    //         break;
    //     }
    // }
    while (count<n)
    {
        for(int i=0;i<n-count;i++){
            if(Array[i]>Array[i+1]){
                int temp=Array[i];
                Array[i]=Array[i+1];
                Array[i+1]=temp;
                fig++;
            }
        }
        count++;
    }
    
    cout<<fig<<endl;
}