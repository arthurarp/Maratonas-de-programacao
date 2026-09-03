#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int dollarbills = n / 100;
    int remainder = n % 100;
    
    if (remainder == 0) {
        cout << dollarbills << endl;
        return 0;

    }

    int v[5] = {100, 20, 10, 5, 1};

    while (remainder > 0) {
        if (remainder / 20 >= 1) {
            dollarbills += remainder / 20;
            remainder = remainder % (20 * (remainder / 20));
        }
    
        if (remainder / 10 >= 1) {
            dollarbills += remainder / 10;
            remainder = remainder % (10 * (remainder / 10));
        }
    
        if (remainder / 5 >= 1) {
            dollarbills += remainder / 5;
            remainder = remainder % (5 * (remainder / 5));
        }
    
        if (remainder / 1 >= 1) {
            dollarbills += remainder / 1;
            remainder = remainder % (1 * (remainder / 1));
        }

    }
    
    cout << dollarbills << endl;

    return 0;
}


