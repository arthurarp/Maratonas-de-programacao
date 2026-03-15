#include <bits/stdc++.h>

using namespace std;

int main(void) {

    int t; cin >> t;

    while (t--) {
        int n; cin >> n;

        vector<int> v;

        while (n--) {
            int a; cin >> a;

            v.push_back(a);
        }

        sort(v.begin(), v.end());
        
        int maximum_difference = 0;

        for (int i = 0; i < v.size(); i = i + 2) {
            int pair_sum = abs(v[i] - v[i + 1]);

            if (pair_sum > maximum_difference) {
                maximum_difference = pair_sum;
            }
        }

        cout << maximum_difference << endl;

    }
    

    return 0;
}

