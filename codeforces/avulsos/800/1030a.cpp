#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    bool its_hard = false;

    while (n--) {
        int a; cin >> a;

        if (a == 1) {
            its_hard = true;
        }
    }

    if (its_hard)
        cout << "HARD\n";
    else
        cout << "EASY\n";

    
    return 0;
}


