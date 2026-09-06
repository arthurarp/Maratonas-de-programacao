#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;

    int years_count = 0;
    for (;;) {
        if (a > b) {
            cout << years_count << endl;
            break;
        }
        a *= 3;
        
        b *= 2;
        
        years_count++;

    }
    
    return 0;
}


