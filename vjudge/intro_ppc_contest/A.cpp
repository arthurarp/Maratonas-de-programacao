#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int N; cin >> N;

    for(int i = N; i < 10000000000; ++i)
    {
        if(i % 2 == 0 and i % N == 0)
        {
            cout << i << endl;
            return 0;
        }
        else if((i * 2) % 2 == 0 and (i * 2) % N == 0)
        {
            cout << i * 2 << endl;
            return 0;
        }
    }

    return 0;
}