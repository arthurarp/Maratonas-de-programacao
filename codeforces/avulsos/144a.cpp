#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int x = 0;
    int y = 101;


    int xi = -1;
    int yi = -1;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;

        if (a > x) {
            x = a;
            xi = i;

        }

        if (a < y) {
            y = a;
            yi = i;

        }
        if (a == y) {
            if (i > yi) {
                yi = i;
            }

        }
    }

    int seconds = xi > yi ? (xi + (n - yi - 1)) - 1 : xi + (n - yi - 1);

    cout << seconds << endl;
    
    return 0;
}