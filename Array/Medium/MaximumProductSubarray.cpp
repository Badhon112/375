// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> Array;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         Array.push_back(x);
//     }
//     int Max_val=INT_MIN,sum=1;
//     for(int i=0;i<n;i++){
//         sum*=Array[i];
//         Max_val=max(Max_val,sum);
//     }
//     cout<<Max_val<<endl;
// }

// Secound Ans;

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int max_overal = nums[0];
    int max_ending_here = nums[0], min_ending_here = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        int temp = max_ending_here;
        // max_ending_here= max(nums[i],nums[i]*max_ending_here,nums[i]*min_ending_here);
        max_ending_here = max({nums[i], nums[i] * max_ending_here, nums[i] * min_ending_here});
        min_ending_here = min({nums[i], nums[i] * temp, nums[i] * min_ending_here});
        max_overal = max(max_overal, max_ending_here);
    }
    cout<<max_overal<<endl;
}