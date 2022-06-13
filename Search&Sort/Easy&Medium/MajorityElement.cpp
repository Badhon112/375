#include <bits/stdc++.h>
using namespace std;
int Majority(vector<int> &Array)
{
    int n = Array.size();
    vector<int> Major;
    int count = 0, Maxvalue = INT_MIN,index=-1;
    for (int i = 0; i < n; i++)
    {
        count=0;
        for (int j = 0; j < n; j++)
        {
            if (Array[i] == Array[j])
            {
                count++;
            }
        }
        // Maxvalue = max(Maxvalue, count);
        if(count>Maxvalue){
            Maxvalue=count;
            index=i;
        }
    }
    return Maxvalue;
    if(Maxvalue/(n/2)){
        return index;
    }
    return -1;
    
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
    int result=Majority(Array);
    if(result){
        cout<<Array[result]<<endl;
    }
    else{
        cout<<"NO";
    }
}