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
    // 1st optimal Approach O(N) Space;
    if (n <= 2)
    {
        cout << "It cant Hold Water" << endl;
    }
    vector<int> left(n), right(n);
    left[0] = 0;
    int left_Max = Array[0];
    // Store the left Max of each bar
    for (int i = 0; i < n; i++)
    {
        left[i] = left_Max;
        left_Max = max(left_Max, Array[i]);
    }
    right[n-1] = 0;
    int right_Max = Array[n-1];
    // Store the Right Max of each bar
    for (int i = n-1; i >=0; i--)
    {
        right[i] = right_Max;
        right_Max = max(right_Max, Array[i]);
    }
    //Culcalute the trapped Water
    int trapped_water=0;
    for(int i=0;i<n-1;i++){
        if(Array[i]<left[i] && Array[i]<right[i]){
            trapped_water+=min(left[i],right[i])-Array[i];
        }
    }
    cout<<trapped_water<<endl;
}