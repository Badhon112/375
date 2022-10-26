#include<bits/stdc++.h>
#define int long long
using namespace std;
void  SolvingProblem(){
    int N,X=0;
    cin>>N;
    while (N%2==0)
    {
        X++;
        N=N/2;
    }
    if(X%2==1){
        X--;
        N=N*2;
    }
    for(int I=0;I*I<=N;++I){
        int Y=N-I*I,Z=sqrt(Y);
        if(Z*Z==Y){
            cout<<(Z<<(X/2))<<" "<<(I<<(X/2))<<endl;
            return;
        }
    }
    
    puts("-1"); 
}
int main(){
    int tesk;
    cin>>tesk;
    while (tesk--)
    {
        SolvingProblem();
    }
    
}