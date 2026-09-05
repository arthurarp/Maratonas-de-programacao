#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        int movements = 0;

        while (n != 1) {
            if (n == 2) {
                movements = -1;
            }
            if (n % 6 == 0) {
                n /= 6;
            }
            else
                n *=2;
        
            movements++;
        }

        cout << movements << endl;

    }
    
    return 0;
}