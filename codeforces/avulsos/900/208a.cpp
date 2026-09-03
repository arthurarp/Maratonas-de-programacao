#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; cin >> s;
    string sub = "WUB";
    string result;

    size_t pos = s.find(sub);

    int v[s.size()];

    for (int i = 0; i < s.size(); ++i)
        v[i] = 0;

    while (pos != string::npos) {
        v[pos] = 1;
        pos = s.find(sub, pos + 1);
    }

    for (int i = 0; i < s.size(); ++i) {
        if (v[i] == 0) {
            result.push_back(s[i]);            
        }
        else {
            if (i > 0 and i < s.size()-1 and result[result.size()-1] != ' ')
                result.push_back(' ');
            i=i+2;  
        }
    }

    cout << result << endl;

    return 0;
}

