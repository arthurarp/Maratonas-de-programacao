#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int get_lucky_digits(string s) {

    int count = 0;

    for (auto c : s) {
        if (c == '4' or c == '7')
            count++;
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n; cin >> n;

    string number = to_string(n);

    int lucky_digits = get_lucky_digits(number);

    if (lucky_digits == 4 or lucky_digits == 7)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}


