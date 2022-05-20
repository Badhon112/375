#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int n = s.size();
    stack<char> Array;
    bool ans = true;
    if (n % 2 != 0)
    {
        ans = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            Array.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (!Array.empty() && Array.top() == '(')
            {
                Array.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == '}')
        {
            if (!Array.empty() && Array.top() == '{')
            {
                Array.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if (s[i] == ']')
        {
            if (!Array.empty() && Array.top() == '[')
            {
                Array.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }
    if(!Array.empty()){
        cout<<"Not Valid"<<endl;
    }
    if(ans){
        cout<<"Valid"<<endl;
    }
    else{
        cout<<"Not Valid"<<endl;
    }
    
}