#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    string a = "I hate it";

    string b = "I love it";

    string c = "I hate that";

    string d = "I love that";


    string result;

    if (n == 1) {
        cout << a << endl;
        return 0;
    }
    else if (n == 2) {
        cout << c + ' ' + b << endl;
        return 0;
    }

    result += c + ' ' + d;

    for (int i = 3; i < n; ++i) {
        if (i % 2 == 0)
            result += ' ' + d;
        else
            result += ' ' + c;
    }

    if (n % 2 == 0)
        result += ' ' + b;
    else
        result += ' ' + a;


    cout << result << endl;
    
    return 0;
}