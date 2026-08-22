#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;

    set<char> myset(s.begin(), s.end());

    cout << (myset.size() % 2 == 0 ? "CHAT WITH HER!\n" : "IGNORE HIM!\n");

    return 0;
}


