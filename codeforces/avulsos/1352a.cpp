#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        string s = to_string(n);

        int zero_count = 0;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '0')
                zero_count++;
        }

        
        int terms = s.size() - zero_count;
        
        cout << terms << endl;

        if (terms == 1) {
            cout << n << endl;
            continue;
        }

        for (int i = 0; i < s.size(); ++i) {
            int x = s[i] - '0';

            int base = x * pow(10, s.size() - 1 - i);

            if (base == 0)
                continue;

            if (i == s.size() - 1)
                cout << base << endl;
            else
                cout << base << " ";


        }



    }
    
    return 0;
}