#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    int moves;

    while (t--) {
        int n; cin >> n;

        if ((n - 1) % 3 == 0 or (n + 1) % 3 == 0)
            cout << "First\n";
        else
            cout << "Second\n";
    }

    return 0;
}