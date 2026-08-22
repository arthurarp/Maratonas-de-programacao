#include <bits/stdc++.h>

using namespace std;

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
          last_valid = -1;
          for (int i = 0; i < (s.size() - 1); ++i) {
                if (s[i] == 42)
                  continue;
                if (s[i] != 42)
                  last_valid = i;
                if (s[last_valid] == s[i + 1]) {
                    s[last_valid] = 42;
                    s[i + 1] = 42;
                }

            }
          }




    }

  

  return 0;
}