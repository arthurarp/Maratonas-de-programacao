#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int a, b, c; cin >> a >> b >> c;

        bool asc = false;
        bool desc = false;

        if (a < b and a < c)
            desc = true;
        

        int diffab = abs(a-b);
        int diffac = abs(a-c);
        int diffbc = abs(b-c);


    }

    
    return 0;
}