#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int signal = 1;

    if (n < 0)
        signal = -1;
  
    if (n >= -10 and n < 1) {
        cout << 0 << endl;
        return 0;
    }
    else if(n > 1) {
        cout << n << endl;
        return 0;
    }

    n = abs(n);
    
    string s = to_string(n);

    int size = s.size();

    string aux;

    for (int i = 0; i < size-2; ++i) {
        aux.push_back(s[i]);
    }

    if (s[size-1] <= s[size-2]) {
        aux.push_back(s[size-1]);
    }
    else 
        aux.push_back(s[size-2]);

    cout << stoi(aux) * signal << endl;

    
    return 0;
}