#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        vector<int> v;

        int max_zeros_seq_without_minus1 = 0;
        
        int x, y;

        bool zero = false;

        int current_seq = 0;

        for (int i = 0; i < n; ++i) {
            int a; cin >> a;

            v.push_back(a);

            if (a == 0 and zero == false) {
                zero = true;
                x = i;
                current_seq++;
            }
            else if (a == 0 and zero == true) {
                current_seq++;
            }
            else if (a == 1 and zero == true) {
                if (current_seq > max_zeros_seq_without_minus1)
                    max_zeros_seq_without_minus1 = current_seq;
                zero = false;
                current_seq = 0;
            }

        }

        bool theres_one = false
    
        for (int i = 0; i < n; ++i) {
            if (v[i] == 1) {
                theres_one = true;
            }
            else if (v[i] == -1) {

            }
            else {

            }
        }
    
    }
    
    
    return 0;
}