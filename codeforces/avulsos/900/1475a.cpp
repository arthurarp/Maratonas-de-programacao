#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    bool has_odd_divisor;
    
    while (t--) {
        ll n; cin >> n;
        
        has_odd_divisor = false;

        if (n % 2 != 0) {
            cout << "YES" << endl;
            continue;
        }
        else {

            while (n % 2 == 0) {

                n /= 2;
            }

            if (n > 1)
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
            
        }

        

    }

    
    return 0;
}