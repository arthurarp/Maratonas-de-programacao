#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n; cin >> n;
    int n_zeros = 0;
    int n_ones = 0;

    string s; cin >> s;
    string result;

    if(n == 3)
    {
        cout << '1' << endl;
        return 0;
    }
    else if(n == 4)
    {
        cout << '0' << endl;
        return 0;
    }
    else
    {
        for(auto i : s)
            if(i == 'z')
                n_zeros++;
            else if(i == 'n')
                n_ones++;
    }

    for(int i = 0; i < n_ones; ++i)
    {
        if(i != n_ones - 1)
            result += "1 ";
        else
            result += '1';
    }
    if(n_zeros > 0)
        result += ' ';
    for(int i = 0; i < n_zeros; ++i)
    {
        if(i != n_zeros - 1)
            result += "0 ";
        else
            result += '0';
    }

    cout << result << endl;


   

    return 0;
}