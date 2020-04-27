#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(void)
{
    string text;
    
    while(getline(cin, text))
    {
        for(auto& c : text)
        {
            c -= 7;
        }

        cout << text << endl;
    }


    return 0;
}