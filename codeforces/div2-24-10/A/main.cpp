#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(void)
{
  ios::sync_with_stdio(false);

  int t; cin >> t;

  for (int i = 0; i < t; ++i)
  {
    ll a, b, c; cin >> a >> b >> c;

    ll total_duration = a + 2 * b + 3 * c;

    ll minimal_diff;

    if (total_duration % 2 == 0)
      minimal_diff = 0;
    else
      minimal_diff = 1;
    cout << minimal_diff << endl;
  }

  return 0;
}
