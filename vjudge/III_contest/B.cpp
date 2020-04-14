#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c; cin >> a >> b >> c;

    int menor = INT_MAX;

    if( a + b < menor ) 
        menor = a + b;
    if ( c + b < menor )
        menor = c + b;
    if( a + c < menor )
        menor = a + c;



    cout << menor << endl;

    return 0;
}