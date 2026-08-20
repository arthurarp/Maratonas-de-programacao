#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x; cin >> x;

    cout << (x % 5 == 0 ? (x / 5) : ((x / 5) + 1)) << endl;
    
    return 0;
}


