#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int v[n+1];
    v[0] = 0;

    int x; cin >> x;

    for (int i = 1; i <= n; ++i) {
        v[i] = 0;
    }

    while (x--) {
        int a; cin >> a;
        v[a] = 1;
    }

    int y; cin >> y;

    while (y--) {
        int a; cin >> a;
        v[a] = 1;
    }
    
    bool completed = true;

    for (int i = 1; i <= n; ++i) {
        if (v[i] == 0) {
            completed = false;
            break;
        }
    }


    cout << (completed ? "I become the guy." : "Oh, my keyboard!") << endl;    
     

    
    
    return 0;
}