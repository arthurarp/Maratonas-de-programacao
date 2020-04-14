#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b; cin >> a >> b;

    int maior = a + b;

    if(a + (a - 1) > maior)
        maior = a + (a - 1);

    if(b + (b -1) > maior)
        maior = b + (b - 1);

    cout << maior << endl;


    return 0;
}