#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int groups = 0;

    char last = '\0';

    while(n--) {
        string s; cin >> s;

        if (last == '\0') {
            last = s[1];
            groups++;
            continue;
        }

        if (last == s[0]) {
            groups++;
            last = s[1];
        }


    }


    cout << groups << endl;


    
    return 0;
}


