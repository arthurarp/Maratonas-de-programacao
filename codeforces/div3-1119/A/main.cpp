#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;

        string s; cin >> s;

        int current_farms = 1;
        int result = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') {
               i = (current_farms * k) - 1;
                
               current_farms++;
               continue;
            }

            if (i + 1 == current_farms * k) {
                result++;
                current_farms++;
            }


        
            
        }

        cout << result << endl;;


    }
    
    return 0;
}