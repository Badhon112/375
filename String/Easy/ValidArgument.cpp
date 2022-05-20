#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S, S1;
    getline(cin, S);
    getline(cin, S1);
    bool ans = true;;
    // for (int i = 0; i < S.size(); i++)
    // {
    //     for (int j = 0; j < S1.size(); j++)
    //     {
    //         if (S[i] == S1[j])
    //         { 
    //             ans = true;
    //         }
    //         else
    //         {
    //             ans = false;
    //         }
    //     }
    // }
    int freqs[26]={0},freqt[26]={0};
    for(char ch:S){
        freqs[ch-'a']++;
    }
    for(char ch:S1){
        freqt[ch-'a']++;
    }
    for(int i=0;i<26;i++){
        if(freqs[i]!=freqt[i]){
            ans= false;
        }
    }


    cout << ans << endl;
}