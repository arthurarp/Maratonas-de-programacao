#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        string s; cin >> s;

        int minimum_possible_length = 10000000;


        for (int i = 1; i < s.size() - 1; ++i) {
            vector<char> v;
            int reps = 0;
            for (int j = 0; j < n; ++j) {
                if (i == j) continue;
                v.push_back(s[j]);

            }

            for (int k = 1; k < v.size(); ++k) {
                if (v[k] == v[k-1])
                    reps++;

            }

            if ((v.size() - reps) < minimum_possible_length)
                minimum_possible_length = (v.size() - reps);

            if (minimum_possible_length == 1) break;

            
        }

        cout << minimum_possible_length << endl;
    
    }



    return 0; 
}