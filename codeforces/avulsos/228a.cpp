#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d; cin >> a >> b >> c >> d;

    set<int> horseshoes;

    horseshoes.insert(a);
    horseshoes.insert(b);
    horseshoes.insert(c);
    horseshoes.insert(d);

    cout << 4 - horseshoes.size() << endl;

    
    return 0;
}