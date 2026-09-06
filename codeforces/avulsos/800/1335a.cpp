#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        ll n; cin >> n;

        cout << (n % 2 == 0 ? (n / 2) - 1 : (n / 2)) << endl;


    }

    
    return 0;
}