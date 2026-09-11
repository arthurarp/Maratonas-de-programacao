#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int max = 0;
    
    int m[100][100];

    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < n; ++j) {
            m[i][j] = 0;
        }
    }

    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0; j < 100; ++j) {
    //         cout << m[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < n; ++i) {
        int a; cin >> a;

        if (a > max)
            max = a;

        for (int j = a; j >= 0; --j) {
            m[i][j] = 1;
        }
  
    }
    

    for (int i = 0; i < max; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }




    
    return 0;
}