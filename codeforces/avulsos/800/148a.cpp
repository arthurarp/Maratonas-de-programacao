#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, l, m, n, d; cin >> k >> l >> m >> n >> d;

    int ik = k;
    int il = l;
    int im = m;
    int in = n;

    int v[d+1];

    for (int i = 1; i <= d; ++i)
        v[i] = 0;

    for (int i = 1; i <= d; ++i) {

        if (i % ik == 0 or i % il == 0 or i % im == 0 or i % in == 0)
            v[i] = 1;

    }

    int count = 0;

    for (int i = 1; i <= d; ++i) {
        if (v[i] == 1) {
            count++;
        }

    }

    cout << count << endl;

    
    return 0;
}