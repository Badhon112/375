#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> A, B, C;
    for (int i = 0; i < a; i++)
    {
        int x;
        cin >> x;
        A.push_back(x);
    }
    for (int i = 0; i < b; i++)
    {
        int x;
        cin >> x;
        B.push_back(x);
    }
    for (int i = 0; i < c; i++)
    {
        int x;
        cin >> x;
        C.push_back(x);
    }
    vector<int> ComElm;
    int i = 0, j = 0, k = 0;
    while (i < a && j < b && k < c)
    {
        if ((A[i] == B[j]) && (B[j] == C[k]))
        {
            ComElm.push_back(A[i]);
            i++;
            j++;
            k++;
        }
        else if(A[i]<B[j]){
            i++;
        }
        else if(B[j]<C[k]){
            j++;
        }
        else{
            k++;
        }
    }
    

    for (int i = 0; i < ComElm.size(); i++)
    {
        cout << ComElm[i] << " ";
    }
}