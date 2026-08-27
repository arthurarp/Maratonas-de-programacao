#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, h; cin >> n >> h;

    int result = 0;

    while (n--) {

        int a; cin >> a;
        
        result++;
        
        if (a > h)
            result++;
    
    }

    cout << result << endl;

    return 0;
}


