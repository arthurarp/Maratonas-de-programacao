#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s; getline(cin, s);
    set<char> ms;

    for(auto i : s)
    {
        if(isalpha(i))
            ms.insert(i);
    }


    cout << ms.size() << endl;

    return 0;
}