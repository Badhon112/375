#include <bits/stdc++.h>
using namespace std;
int Binary(int Array[], int f, int l, int index)
{
    if (l >= f)
    {
        int mid = f + (l - 1) / 2;
        if (Array[mid] == index)
        {
            return mid;
        }
        if (Array[mid] > index)
        {
            return Binary(Array, f, mid - 1, index);
        }
        return Binary(Array, mid + 1, l, index);
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    // vector<int> Array;
    int Array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Array[i];
    }
    int index;
    // cout << "Enter The Element: ";
    cin >> index;
    // sort(Array.begin(), Array.end());
    sort(Array, Array + n);

    int result = Binary(Array, 0, n - 1, index);
    if (result == -1)
    {
        cout << "Element not Present" << endl;
        
    }
    else
    {
        cout << "Elemtn present in " << result+1 << " index" << endl;
    }
}