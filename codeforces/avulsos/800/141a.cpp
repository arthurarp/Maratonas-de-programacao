#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string g, h, p; cin >> g >> h >> p;

    int v['Z' + 1];

    for (int i = 'A'; i <= 'Z'; ++i) {
        v[i] = 0;
    }

    for (char c : g)
        v[c]++;

    for (char c: h)
        v[c]++;

    for (char c : p)
        v[c]--;

    bool aux = true;

    for (int i = 'A'; i <= 'Z'; ++i) {
        if (v[i] != 0) {
            aux = false;
            break;
        }
            
    }

    cout << (aux ? "YES\n": "NO\n");
    
    return 0;
}