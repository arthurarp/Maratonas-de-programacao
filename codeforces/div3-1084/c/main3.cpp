#include <bits/stdc++.h>

using namespace std;

string find_a_pair(char initial, const string& rest) {



    return "YES";
}

int main(void)
{
    int t; cin >> t;

    while(t--) {

          int n; cin >> n;

          string s; cin >> s;

          if (n == 1) {
              cout << "NO\n";
              continue;
          }

          string find_out = find_a_pair(s[0], s.substr(1));
          
          cout << find_out << endl;

    }

  return 0;
}