#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> Array, Ans;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // String S;
        string S;
        cin >> S;
        // cin>>S;
        Array.push_back(S);
    }
    for (auto it : Array)
    {
        bool ans =false;
        for (auto i : it)
        {
            if (i == 'q' || i == 'Q' || i == 'w' || i == 'e' || i == 'r' || i == 't' || i == 'y' || i == 'u' || i == 'i' || i == 'o' ||
                i == 'p' || i == 'W' || i == 'E' || i == 'R' || i == 'T' || i == 'Y' || i == 'U' || i == 'I' || i == 'O' || i == 'P')
            {
                ans = true;
            }
            else if (i == 'a' || i == 's' || i == 'd' || i == 'f' || i == 'g' || i == 'h' || i == 'j' || i == 'k' || i == 'l' || i == 'A' ||
                i == 'S' || i == 'D' || i == 'F' || i == 'G' || i == 'H' || i == 'J' || i == 'K' || i == 'L')
            {
                ans=true;
            }
            else if(i == 'z' || i == 'x' ||i == 'c' || i == 'v' ||i == 'b' || i == 'n' ||i == 'm' || i == 'Z' ||
            i == 'X' || i == 'C' ||i == 'V' || i == 'B' ||i == 'N' || i == 'M' )
            {
                ans=true;
            }
            
        }
        if (ans==false)
        {
            Ans.push_back(it);
        }
    }
    for(auto it:Ans){
        cout<<it<<" ";
    }
}
class Solution {
public:
bool check(char r,string s){
    for(auto i:s){
        if(i==r) return true;
    }
    return false;
}
    vector<string> findWords(vector<string>& words) {
        vector<string> mp={"qwertyuiop","asdfghjkl","zxcvbnm"};
        vector<string>Ans;
        int n=words.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++){
                bool found=true;
                for(int k=0;k<words[i].size();k++){
                    if(!check(tolower(words[i][k]),mp[j])) found=false;
                }
                if(found){
                    Ans.push_back(words[i]);
                    break;
                }
            }
        }
        return Ans;
    }
};