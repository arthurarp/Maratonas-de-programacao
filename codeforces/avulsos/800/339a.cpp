#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    vector<int> v;

    v.push_back(s[0] - '0');

    for (int i = 1; i < s.size(); ++i) {
        if (i % 2 == 0)
            v.push_back(s[i] - '0');
    
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); ++i) {
        if (i == v.size() - 1)
            cout << v[i] << endl;
        else
            cout << v[i] << "+";
    }
    
    return 0;
}


