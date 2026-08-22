#include <bits/stdc++.h>

using namespace std;

int main(void){

    int n, k; cin >> n >> k;

    int v[n + 1];

    int min = 200;

    for (int i = 1; i <= n; ++i) {
        int e; cin >> e;

        v[i] = e;
    }

    int vk = v[k];
    int count = 0;
    int zeros_count = 0;
    
    if (v[1] == 0) {
        cout << 0 << endl;
        return 0;
    }

    for (int i = 1; i <= n; ++i) {
        if (v[i] >= vk and v[i] != 0) count++;

    }

    cout << count << endl;




    return 0;
}