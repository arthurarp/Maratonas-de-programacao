#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n, k; cin >> n >> k;

        string s; cin >> s;

        
        if ((s.size() - 1 == k and k != 0) or s.size() == 1) {
            cout << "YES" << endl;
            continue;
        }
        
        int frequence[26];
        
        for (int i = 'a'; i <= 'z'; ++i) {
            frequence[i] = 0;
        }
        
        for (int i = 0; i < s.size(); ++i) {
            frequence[s[i]]++;
        }
        
        int to_remove = 0;
        
        for (int i = 'a'; i <= 'z'; ++i) {
            if (to_remove == k) {
                break;
            }
            if (frequence[i] % 2 != 0) {
                to_remove++;
                frequence[i]--;
            }
            
        }
        
        int count_odd = 0;
        for (int i = 'a'; i <= 'z'; ++i) {
            if (frequence[i] % 2 != 0) {
                count_odd++;
                
            }
        }

        cout << (count_odd > 1 ? "NO" : "YES") << endl;

    }

    
    return 0;
}

// g ab g ba g

// g ab cgc ba g 