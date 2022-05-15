#include <bits/stdc++.h>
using namespace std;
void Solve(vector<int> Array)
{
    int n = Array.size();
    int i = 1;
    int PicValue = -1;
    while (i <= n)
    {
        if (Array[i] > Array[i - 1])
        {
            PicValue = i;
        }
        i++;
    }
    if(PicValue==-1){
        for(int i=0;i<n/2;i++){
            swap(Array[i],Array[n-i-1]);
        }
        return;
    }
    //Find element int the range of (Array[PicValue-1]) to (Array[PicValue]) to the right
    int nn=Array[PicValue];
    int index=PicValue;
    for(int i=PicValue;i<n;i++){
        if(Array[i]>Array[PicValue-1] and Array[i]<Array[index]){
            index=i;
        }
    }
    swap(Array[PicValue-1],Array[index]);
    sort(Array.begin()+PicValue,Array.end());
    // next_permutation()
}
int main()
{
    int n;
    cin >> n;
    // int Array[n];
    vector<int> Array;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Array.push_back(x);
    }
    Solve(Array);
}