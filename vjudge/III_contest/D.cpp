#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
    int total = a + b + c + d + e;
    int soma = 0;

    int v[5];
   
    v[0] = a < 10 ? 10 - a : a % 10 == 0 ? 0: 10 - (a % 10);
    v[1] = b < 10 ? 10 - b : b % 10 == 0 ? 0: 10 - (b % 10);
    v[2] = c < 10 ? 10 - c : c % 10 == 0 ? 0: 10 - (c % 10);
    v[3] = d < 10 ? 10 - d : d % 10 == 0 ? 0: 10 - (d % 10);
    v[4] = e < 10 ? 10 - e : e % 10 == 0 ? 0: 10 - (e % 10);

    int maior = 0;

    for(int i = 0; i < 5; ++i)
    {
        if(v[i] > maior)
            maior = v[i];
    }
    bool hasnt_bigger = true;
    for(int i = 0; i < 5; ++i)
        if(maior == v[i] and hasnt_bigger)
        {
            v[i] = 0;  
            hasnt_bigger = false;  
        }
        else
            soma += v[i];
    
    cout << total + soma << endl;

    return 0;
}