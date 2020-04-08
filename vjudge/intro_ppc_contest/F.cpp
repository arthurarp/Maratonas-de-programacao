#include <bits/stdc++.h>

using namespace std;

int sum_elements(int n) 
{
    int sum = 0, m;

    while(n > 0)
    {    
        m = n % 10;    
        sum = sum + m;    
        n = n / 10;    
    }
    return sum;
}

int main( void )
{
    int N; cin >> N;
    int menor = INT_MAX;

    for(int i = 1, j = N - 1; i <= N / 2 and j >= N / 2; ++i and --j)
    {
        int soma_a = sum_elements(i);
        int soma_b = sum_elements(j);
        int ab = soma_a + soma_b;

        if(ab < menor)
            menor = ab;
    }

    cout << menor << endl;

    return 0;
}