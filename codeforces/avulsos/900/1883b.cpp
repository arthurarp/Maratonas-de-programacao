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
        
        int frequence[127];
        
        for (int i = 'a'; i <= 'z'; ++i) {
            frequence[i] = 0;
        }

        for (int i = 0; i < s.size(); ++i) {
            frequence[s[i]]++;
        }
        
        int count_even = 0;
        int count_odd = 0;

        bool palindrome = true;
        
        for (int i = 'a'; i <= 'z'; ++i) {
         
            if (frequence[i] % 2 != 0) {
                count_odd++;
                // frequence[i]--;
            }
            else
                count_even++;
            
        }

        int result = count_odd - k;
        
        if ((count_odd > 0) and (result > 1)) {
            palindrome = false;
        }

        cout << (palindrome ? "YES" : "NO") << endl;

    }

    
    return 0;
}

// g ab g ba g

// g ab cgc ba g 

// ab ab ba
// ababa
// bbaaaabb
// aabbccddee 
// abcddcba
// abcdeedcedcba