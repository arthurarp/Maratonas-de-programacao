#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x1, x2, x3; cin >> x1 >> x2 >> x3;

    vector<int> v;

    v.push_back(x1);
    v.push_back(x2);
    v.push_back(x3);

    sort(v.begin(), v.end());

    int median = v[1];

    int result = abs(x1 - median) + abs(x2 - median) + abs(x3 - median);

    cout << result << "\n";
    
    return 0;
}