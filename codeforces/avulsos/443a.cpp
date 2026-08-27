#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; getline(cin, s);

    set<char> myset;

    for (auto c : s) {
        if ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z')) {
             myset.insert(c);
        }
    }
    cout << myset.size() << endl;
    
    return 0;
}