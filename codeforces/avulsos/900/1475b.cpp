#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        int multiples = n / 2020;

        int aux = n - (multiples * 2020);

        if (aux <= multiples)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    
    return 0;
}