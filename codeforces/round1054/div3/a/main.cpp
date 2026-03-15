#include <bits/stdc++.h>

using namespace std;

constexpr int kOpsFromNeg1ToPos1 = 2;

int main(void) {

    int t; cin >> t;

    while (t--) {
        
        int n; cin >> n;

        int negatives_count = 0;
        int zeros_count = 0;
        int movements_count = 0;
        
        while (n--) {
            
            int a; cin >> a;

            if (a == -1)
                negatives_count++;
            if (a == 0)
                zeros_count++;
                     
        }

        if (negatives_count % 2 == 0)
            movements_count = zeros_count;
        else
            movements_count = zeros_count + kOpsFromNeg1ToPos1;

        cout << movements_count << endl;

    }

    return 0;
}