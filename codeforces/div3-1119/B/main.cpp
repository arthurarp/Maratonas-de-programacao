#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;


        vector<int> even;
        vector<int> odd;

        while (n--) {
            int a; cin >> a;

            if (a % 2 == 0)
                even.push_back(a);
            else
                odd.push_back(a);

        }

        int result_even = 0;
        int result_odd = odd.size();

        if (odd.size() > even.size()) {
            cout << result_odd << endl;
        }
        else {
            int n_even = 0;
            int n_odd = 0;

            for (int i = 0; i < even.size(); ++i) {

                int aux = even[i] / 2;
                if (aux % 2 != 0) {
                    n_even++;
                }
                else
                    n_odd++;
            }
            

            cout << max(max(n_even, n_odd), result_odd) << endl;
        }

    }

    
    return 0;
}