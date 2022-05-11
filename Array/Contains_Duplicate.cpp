// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//       int n;
//       cin>>n;
//       int Array[n];
//     //   int hash[n];
//     vector<int> hash;
//       for(int i=0;i<n;i++){
//           cin>>Array[i];
//         //   hash[Array[i]]++;
//         hash.push_back(Array[i]++);
//       }
//     //   if(hash)
//     bool ans=true;
//     for(int i=0;i<hash.size();i++){
//         if(hash.size()>1){
//             ans=false;
//         }
//     }
//     if(ans){
//         cout<<"Not Duplicate";
//     }
//     else{
//         cout<<"Duplicate";
//     }

// }
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
    bool ans = true;
    sort(Array.begin(), Array.end());
    for (int i = 0; i < n-1; i++)
    {
        if (Array[i] == Array[i + 1])
        {
            ans = true;
        }
    }
    if (ans)
    {
        cout << "Duplicate";
    }
    else
    {
        cout << "Not Duplicate";
    }
}