#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, k; cin >> n >> k;
    
    for(int i = 0; i < k; ++i)
    {
        int last = n % 10;

        if(last != 0)
            n -= 1;
        else
            n /= 10;
    }
    

    cout << n << endl;


    return 0;
}