#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b; cin >> a >> b;

    vector<string> v;

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i])
            v.push_back("1");
        else
            v.push_back("0");
    }

    for (int i = 0; i < a.size(); ++i) {
        cout << v[i];
    }

    cout << endl;
    
    return 0;
}