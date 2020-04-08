#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int K; cin >> K;

    int total = 0;
    int total_impares;
    int total_pares;

    if(K % 2 == 0)
    {
        total_impares = K / 2;
        total_pares = K / 2;
    }
    else
    {
        total_impares = K / 2 + 1;
        total_pares = K / 2;
    }
    
    total = total_impares * total_pares;
    cout << total << endl;


    return 0;
}