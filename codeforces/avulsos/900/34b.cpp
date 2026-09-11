#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;

    vector<int> v;

    while (n--) {
        int a; cin >> a;

        v.push_back(a);
    }

    sort(v.begin(), v.end());

    int total = 0;
    int count = 0;

    for (int i = 0; i < v.size(); ++i) {
        if (v[i] < 0) {
            total += abs(v[i]);
            count++;
        }
        if (count == m)
            break;
    }

    cout << total << endl;
    
    return 0;
}