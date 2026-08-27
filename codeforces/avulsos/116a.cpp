#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int max = 0;

    int people_in_train = 0;

    while (n--) {
        int a, b; cin >> a >> b;

        people_in_train -= a;

        people_in_train += b;


        if (people_in_train > max) {
            max = people_in_train;
        }


        
    }
    
    cout << max << endl;
    return 0;
}


