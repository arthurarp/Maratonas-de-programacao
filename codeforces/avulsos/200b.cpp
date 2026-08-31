#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int total = n * 100;

    float result = 0;

    while(n--) {
        int p; cin >> p;

        result += p;

    }

    cout << (result / total) * 100.0 << endl;
    
    
    return 0;
}