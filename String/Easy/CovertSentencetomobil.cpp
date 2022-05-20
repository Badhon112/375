#include <bits/stdc++.h>
using namespace std;
int main()
{
    string inp, out;
    getline(cin, inp);
    // toupper(inp);
    for (int i = 0; i < inp.size(); i++)
    {
        if (inp[i] == 'A')
        {
            out += "2";
        }
        else if (inp[i] == 'B')
        {
            out += "22";
        }
        else if (inp[i] == 'C')
        {
            out += "222";
        }
        else if (inp[i] == 'D')
        {
            out += "3";
        }
        else if (inp[i] == 'E')
        {
            out += "33";
        }
        else if (inp[i] == 'F')
        {
            out += "333";
        }
        else if (inp[i] == 'G')
        {
            out += "4";
        }
        else if (inp[i] == 'H')
        {
            out += "44";
        }
        else if (inp[i] == 'I')
        {
            out += "444";
        }
        else if (inp[i] == 'J')
        {
            out += "5";
        }
        else if (inp[i] == 'K')
        {
            out += "55";
        }
        else if (inp[i] == 'L')
        {
            out += "555";
        }
        else if (inp[i] == 'M')
        {
            out += "6";
        }
        else if (inp[i] == 'N')
        {
            out += "66";
        }
        else if (inp[i] == 'O')
        {
            out += "666";
        }
        else if (inp[i] == 'P')
        {
            out += "7";
        }
        else if (inp[i] == 'Q')
        {
            out += "77";
        }
        else if (inp[i] == 'R')
        {
            out += "777";
        }
        else if (inp[i] == 'S')
        {
            out += "7777";
        }
        else if (inp[i] == 'T')
        {
            out += "8";
        }
        else if (inp[i] == 'U')
        {
            out += "88";
        }
        else if (inp[i] == 'V')
        {
            out += "888";
        }
        else if (inp[i] == 'W')
        {
            out += "9";
        }
        else if (inp[i] == 'X')
        {
            out += "99";
        }
        else if (inp[i] == 'Y')
        {
            out += "999";
        }
        else if (inp[i] == 'Z')
        {
            out += "9999";
        }
        else if (inp[i] == ' ')
        {
            out += "0";
        }
    }
    cout << out << endl;
}