#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;

    bool last = true;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i % 2 == 0) {
                if (last == true and j == m) {
                    cout << "#";
                }
                else if (last == true and j != m) {
                    cout << ".";
                }
                else if (last == false and j == 1) {
                    cout << "#";
                }
                else {
                    cout << ".";
                }
            }
            else {
                cout << "#";
            }
            
        }
        if (i % 2 == 0) 
            last = !last;
        cout << endl;
    }
    
    return 0;
}