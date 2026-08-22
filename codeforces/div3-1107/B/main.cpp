#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        int digits = to_string(x).size();

        long long power = 1;

        for (int i = 0; i < digits; ++i) {
            power *= 10;
        }

        long long y = power + 1;

        cout << y << '\n';
    }
}