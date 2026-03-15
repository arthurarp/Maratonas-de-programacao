#include <bits/stdc++.h>

using namespace std;

int main(void) {

    int t; cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;

        vector<int> v(n), freq(k, 0);
        
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            
            if (v[i] < k) 
                freq[v[i]]++;
            
        }
        
        int mex_frequence = count(v.begin(), v.end(), k);
        int remaining_count = 0;
        for (int i = 0; i < k; ++i) {
            if (freq[i] == 0)
                remaining_count++;
        }
      
        cout << max(mex_frequence, remaining_count) << endl;

    }

    return 0;
}