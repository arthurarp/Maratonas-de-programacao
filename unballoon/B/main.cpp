#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void)
{
  int n;

  cin >> n;

  vector<ll> v(n);

  for (int i = 0; i < n; ++i)
    cin >> v[i];

  sort(v.begin(), v.end());

  ll middle = v[(n / 2)];
  ll sum = 0;

  for (int i = 0; i < n; ++i)
    sum += abs(v[i] - middle);

  cout << sum << endl;

  return 0;
}