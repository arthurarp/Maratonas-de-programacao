#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b; cin >> a >> b;
    int total;
    if(a >= 13)
        total = b;
    else if(a <= 5)
        total = 0;
    else
        total = b / 2;
    

    cout << total << endl;
    
    

    return 0;
}