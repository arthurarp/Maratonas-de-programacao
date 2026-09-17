#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    
    while (t--) {
        int n, q; cin >> n >> q;

        vector<int> v;

        for (int i = 0; i < n; ++i) {
            int a; cin >> a;

            v.push_back(a);
        }

        vector<int> prefix (v.size());
        prefix[0] = v[0];

        vector<int> tprefix (v.size());
        tprefix[v.size()-1] = v[v.size()-1];


        for (int i = 1; i < v.size(); ++i) {
            prefix[i] = v[i] + prefix[i-1];
        }

        for (int i = v.size()-2; i >= 0; --i) {
            tprefix[i] = v[i] + tprefix[i+1];
        }


        for (int i = 0; i < q; ++i) {
            int l, r, k; cin >> l >> r >> k;
            
            int k_sum = (r - l + 1) * k;
            int init = l - 2;
            int final = r+1;

            int total = k_sum + (init < 0 ? 0 : prefix[init]) + (r >= v.size() ? 0 : tprefix[r]);


            cout << (total % 2 != 0 ? "YES": "NO") << endl;

        }
    }

    
    return 0;
}