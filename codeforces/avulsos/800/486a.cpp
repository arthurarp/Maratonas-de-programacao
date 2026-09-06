#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll f(ll n) {

    if (n == 1)
        return -1;

    if (n % 2 == 0)
        return n / 2;
    
    if (n % 2 != 0)
        return ((n / 2) + 1) * -1;

    else return 0;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;

    cout << f(n) << endl;

    return 0;
}