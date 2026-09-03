#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(void) {
    
    ll k, n, w; cin >> k >> n >> w;

    ll banana_total_cost = 0;

    for (int i = 1; i <= w; ++i) 
        banana_total_cost += k * i;
    
    cout << (n - banana_total_cost >= 0 ? 0 : banana_total_cost - n) << endl;
    







    return 0;
}