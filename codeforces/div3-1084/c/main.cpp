#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        string st;
        for (char c : s) {
            if (!st.empty() && st.back() == c)
                st.pop_back(); 
            else
                st.push_back(c); 
        }

        cout << (st.empty() ? "YES" : "NO") << "\n";
    }
    return 0;
}