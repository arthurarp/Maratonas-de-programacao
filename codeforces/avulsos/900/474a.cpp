#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

    int v[200];

    for (int i = 0; i < 200; ++i) {
        v[i] = 0;
    }

    char direction; cin >> direction;
    string input; cin >> input;

    if (direction == 'R') {
        for (int i = 0; i < input.size(); ++i) {
            int pos = find(s.begin(), s.end(), input[i]) - s.begin();
            // cout << pos << endl;
            cout << s[pos-1];
        }
        cout << endl;
    }
    else {
        for (int i = 0; i < input.size(); ++i) {
            int pos = find(s.begin(), s.end(),  input[i]) - s.begin();
            // cout << pos << endl;
            cout << s[pos+1];
        }
        cout << endl;
    }

    
    return 0;
}