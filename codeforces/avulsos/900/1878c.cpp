#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n, k, x; cin >> n >> k >> x;

        int sum = 0;
        int used = 0;
        
        int min, max;


        min += ((k + 1) * k) / 2;
        max + ((n + (n - 6)) * k);

        cout << min << " | " << max << endl;
    }

    
    return 0;
}