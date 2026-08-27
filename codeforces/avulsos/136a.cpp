#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int v[n+1];

    for (int i = 1; i <= n; ++i) {
        int p; cin >> p;

        v[p] = i;
    }

    for (int i = 1; i <= n; ++i) {
        if (i == n)
            cout << v[i] << endl;
        else
            cout << v[i] << " ";
    }
    
    return 0;
}