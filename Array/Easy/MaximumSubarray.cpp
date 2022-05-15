// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> Array;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         Array.push_back(x);
//     }
//     int cursum = 0;
//     vector<int> Sum;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             cursum += Array[j];
//         }
//         // if (cursum >= 0)
//         // {
//         Sum.push_back(cursum);
//         // }
//     }
//     int Max = INT_MIN;
//     for (int i = 0; i < Sum.size(); i++)
//     {
//         Max = max(Max, Sum[i]);
//     }
//     cout << Max << endl;
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
    int cursum = 0;
    int Max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (cursum < 0)
        {
            cursum = 0;
        }
        cursum += Array[i];
        Max = max(Max, cursum);

    }
    cout<<Max<<endl;
}