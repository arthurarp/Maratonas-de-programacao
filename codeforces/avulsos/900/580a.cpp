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
    
    int major_sequence = 1;
    int current_sequence = 1;
    
    for (int i = 0; i < n-1; ++i) {
        if (v[i] <= v[i+1]) {
            current_sequence++;

            if (current_sequence > major_sequence)
                major_sequence = current_sequence;
        }
        else 
            current_sequence = 1;
    }

    cout << major_sequence << "\n";
    
    return 0;
}