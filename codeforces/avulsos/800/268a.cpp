#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<int> home;
    vector<int> guest;

    int times = 0;

    while (n--) {
        int h, a; cin >> h >> a;

        auto it = count(home.begin(), home.end(), a);

        auto it2 = count(guest.begin(), guest.end(), h);

        if (it > 0)
            times += it;    

        if (it2 > 0)
            times += it2;

        home.push_back(h);
        
        guest.push_back(a);

    }

    cout << times << "\n";
    
    return 0;
}