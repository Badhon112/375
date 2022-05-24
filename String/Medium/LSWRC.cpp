#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S, Ans;
    getline(cin, S);
    int n = S.size();
    int result = 0,start=0,end=0;
    set<char> Set;
    while (start<n){
        auto it=Set.find(S[start]);
        if(it==Set.end()){
            if(start-end+1>result){
                result=start-end+1;
            }
            Set.insert(S[start]);
            start++;
        }
        else{
            Set.erase(S[end]);
            end++;
        }
    }
    {
        /* code */
    }
    
    cout<<result<<endl;
}