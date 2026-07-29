#include <bits/stdc++.h>

using namespace std;

bool is_a_palindrome(const string& s) {
    int string_size = static_cast<int>(s.size());

    for (int i = 0; i < string_size / 2; ++i) {
        if (s[i] != s[string_size - 1 - i]) {
            return false;
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        string s; cin >> s;

        cout << is_a_palidrome(s) << endl;


    }

    return 0;
}