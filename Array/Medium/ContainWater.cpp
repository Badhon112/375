#include <bits/stdc++.h>
using namespace std;
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
    // vector<int> left(n), right(n);
    // left[0] = Array[0];
    // int left_max = Array[0];
    // for (int i = 0; i < n; i++)
    // {
    //     left[i] = left_max;
    //     left_max = max(left_max, Array[i]);
    // }
    // right[n - 1] = Array[0];
    // int right_max = Array[n - 1];
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     right[i] = right_max;
    //     right_max = max(right_max, Array[i]);
    // }
    // int water = 0;
    // vector<int> Array2, Array3;
    // for (int i = 0; i < n; i++)
    // {
    //     Array2.push_back(Array[i]);
    // }
    // sort(Array2.begin(),Array2.end());
    // for(int i=0;i<n-1;i++){
    //     if(Array2[i]!=Array2[i+1]){
    //         Array3.push_back(Array2[i]);
    //     }
    // }
    // for(int i=0;i<Array3.size();i++){
    //     cout<<Array2[i]<<" ";
    // }
    // cout<<Array3[Array3.size()-1]<<endl;
    // cout << right_max << " " << left_max << endl;
    // int Min=Array3[Array3.size()-1];
    // for (int i = 1; i < n; i++)
    // {
    //     if (Array[i] < right[i] && Array[i] < left[i])
    //     {
    //         water += min(left[i], right[i]) - Array[i];
    //         water+=Min;
    //     }
    // }
    // cout << water << endl;

    int water = 0, left = 0, right = n - 1;
    while (left < right)
    {
        water = max(water, min(Array[left], Array[right]) * (right - left));
        if (Array[left] > Array[right])
            right--;
        else
        {
            left++;
        }
    }
    cout << water << endl;
}
