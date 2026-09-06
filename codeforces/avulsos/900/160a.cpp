#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    
    vector<int> v;
    
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        
        v.push_back(a); 
        
    }

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    sort(v.begin(), v.end());
   
    vector<int> aux;

    aux.push_back(v[0]);

    for (int i = 1; i < n; ++i) {
        
        aux.push_back(v[i] + aux[i-1]);
    }


    
    int aux2[n];
    
    aux2[n-1] = v[n-1];
    
    for (int i = n-2; i >= 0; --i) {
        aux2[i] = v[i] + aux2[i+1];
    }
 
    int coins = n;

    for (int i = n-1; i > 0; --i) {
        if (aux2[i] > aux[i-1]) {
            coins = n - i;
            break;
        }
    }

    cout << coins << endl;
    return 0;
}

