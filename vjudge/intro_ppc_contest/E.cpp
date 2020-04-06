#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c, k; cin >> a >> b >> c >> k;
    int maior_a = 0;
    int maior_b = 0;
    int maior_c = 0;
    int total = 1;
    if(a > b and a > c)
        maior_a = a;
    else if(b > a and b > c)
        maior_b = b;
    else if (c > a and c > b)
        maior_c = c;
    else
    {
        for(int i = 0; i < k; ++i)
            a *= 2;

        total = a + b + c;
    }
    

    if(maior_a)
    {
        for(int i = 0; i < k; ++i)
            maior_a *= 2;

        total = maior_a + b + c;
        
    }
    else if(maior_b)
    {
        for(int i = 0; i < k; ++i)
            maior_b *= 2;

        total = maior_b + a + c;
    }
    else if(maior_c)
    {
        for(int i = 0; i < k; ++i)
            maior_c *= 2;

        total = maior_c + a + b;
    }
    
    cout << total << endl;

    return 0;
}