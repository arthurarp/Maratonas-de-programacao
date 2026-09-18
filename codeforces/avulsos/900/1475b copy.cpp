#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        cout << n % 2020 << endl;
        cout << abs(n - (n % 2020)) << endl;

        if ((abs(n - (n % 2020)) > 0.0 and abs(n - (n % 2020)) < 0.1) and (abs(n - (n % 2021)) > 0.9 and abs(n - (n % 2021)) < 1))
            cout << "YES" << endl;
        
        cout << "NO" << endl;
    }

    
    return 0;
}