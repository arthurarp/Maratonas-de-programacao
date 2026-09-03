#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int a, b; cin >> a >> b;

        int moves = 0;
        
        if (a % b == 0) {
            cout << moves << endl;
            continue;;
        }
        
        float div = a / b;
        
        int u = (int)div + 1;

        int bu = b * u;
        
        moves = abs(bu - a);
        
        cout << moves << endl;
    }
    

    return 0;
}
