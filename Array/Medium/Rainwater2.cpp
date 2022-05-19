#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> Ans;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Ans.push_back(x);
    }
    if(n<=2){
        cout<<"It cant,t hold water";
    }
    vector<int> left(n),right(n);

    left[0]=0;
    int left_max=Ans[0];
    for(int i=0;i<n;i++){
        left[i]=left_max;
        left_max=max(left_max,Ans[i]);
    }
    right[0]=0;
    int right_max=Ans[n-1];
    for(int i=n-1;i>=0;i--){
        right[i]=right_max;
        right_max=max(right_max,Ans[i]);
    }

    int traped_water=0;
    for(int i=0;i<n;i++){
        if(Ans[i]<left[i] && Ans[i]<right[i]){
            traped_water+=min(left[i],right[i])-Ans[i];
        }
    }
    cout<<traped_water<<endl;
}