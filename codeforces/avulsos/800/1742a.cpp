#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int a, b, c; cin >> a >> b >> c;

        cout << ((a + b == c or b + c == a or a + c == b) ? "YES\n" : "NO\n");        
    }

    
    return 0;
}