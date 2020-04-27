#include <bits/stdc++.h>

using namespace std;

int total_palavras(string s)
{
    int total = 0;
    bool palavra = false;
    bool espaco = false;

    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] >= 65 and s[i] <= 122)
            palavra = true;
        else if(s[i] == 32 and palavra)
        {
            total++;
            palavra = false;
        }
        if(i == s.size() - 1 and palavra)
        {
            total++;
        }
    }
    return total;
}

int main(void)
{
    string s;
    int total = 0;

    while(getline(cin, s))
    {
        total = total_palavras(s);
        cout << total << endl;

    }

    return 0;
}