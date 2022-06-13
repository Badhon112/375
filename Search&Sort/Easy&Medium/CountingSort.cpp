#include <bits/stdc++.h>
using namespace std;
void Sorting(vector<int> &Array)
{
    int Max = INT_MIN, n = Array.size();
    for (int i = 0; i < Array.size(); i++)
    {
        Max = max(Max, Array[i]);
    }
    vector<int> Count(Max + 1, 0);
    
    //Increment the corresponding index in the count array
    for (int i = 0; i < n; i++)
    {
        // Count[Array[i]] = Count[Array[i]] + 1;
        Count[Array[i]]++;
    }
    // for (int i = 0; i <Max+1; i++)
    // {
    //     cout << Count[i] << " ";
    // }
    //Counter for count and Given Array
    int i=0,j=0;
    while (i<=Max)
    {
        if(Count[i]>0){
            Array[j]=i;
            Count[i]--;
            j++;
        }
        else{
            i++;
        }

    }
    for(int i=0;i<Array.size();i++){
        cout<<Array[i]<<" ";
    }

}
int main()
{
    int n;
    cin >> n;
    vector<int> Array;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Array.push_back(x);
    }
    Sorting(Array);
}
