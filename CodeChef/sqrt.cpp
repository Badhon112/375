#include<bits/stdc++.h>
#define int long long
using namespace std;
int N,X;
void  SolvingProblem(){
    cin>>N;X=0;
    while (N%2==0)
    {
        X++;
        N=N/2;
    }
    if(X%2==1){
        X--;
        N=N*2;
    }
    for(int i=0;i*i<=N;i++){
        int Y=N-i*i,Z=sqrt(Y);
        if(Z*Z==Y){
            cout<<(Z<<(X/2))<<" "<<(i<<(X/2))<<endl;
            return;
        }
    }
    
    puts("-1"); 
}
signed main(){
    int tesk;
    cin>>tesk;
    while (tesk--)
    {
        SolvingProblem();
    }
    
}