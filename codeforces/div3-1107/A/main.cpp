#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);

  int t; cin >> t;

  while (t--) {
   
      int x, y; cin >> x >> y;

      if (x % y == 0) {
        cout << "YES\n";
      }
      else {
        cout << "NO\n";
      }

  }

  return 0;
}
