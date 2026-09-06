#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<int> v;

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;

        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; ++i) {
        if (i == n-1)
            cout << v[i] << endl;
        else
            cout << v[i] << " ";

    }

    
    return 0;
}