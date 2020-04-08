#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int N, T; cin >> N >> T;

    int menor_custo = INT_MAX;
    int menor_tempo = INT_MAX;


    for(int i = 0; i < N; ++i)
    {
        int a, b; cin >> a >> b;

        if(b <= T)
        {    
            if(menor_custo > a)
                menor_custo = a;
        }

    }

    if(menor_custo == INT_MAX)
        cout << "TLE\n";
    else
        cout << menor_custo << endl;

    return 0;
}