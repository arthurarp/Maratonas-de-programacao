#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(void)
{
  ios::sync_with_stdio(false);

  ll N; cin >> N;
  ll number_of_naturals = N;
  ll first_3_multiple = 3;
  ll last_3_multiple = 0;
  ll first_5_multiple = 5;
  ll last_5_multiple = 0;
  ll first_3_and_5_multiple = 15;
  ll last_3_and_5_multiple = 0;

  for (ll i = N + 1; i > 0; i--)
  {
    if (i == N + 1)
      continue;
    if (i % 3 == 0)
    {
      last_3_multiple = i;
      break;
    }
  }
  for (ll i = N + 1; i > 0; i--)
  {
    if (i == N + 1)
      continue;
    if (i % 5 == 0)
    {
      last_5_multiple = i;
      break;
    }
  }
  for (ll i = N + 1; i > 0; i--)
  {
    if (i == N + 1)
      continue;
    if (i % 5 == 0 and i % 3 == 0)
    {
      last_3_and_5_multiple = i;
      break;
    }
  }

  ll total_number_of_3_multiples = ((last_3_multiple - first_3_multiple) / 3) + 1;
  ll total_number_of_5_multiples = ((last_5_multiple - first_5_multiple) / 5) + 1;
  ll total_number_of_3_and_5_multiples = ((last_3_and_5_multiple - first_3_and_5_multiple) / 15) + 1;
  cout << N - total_number_of_3_multiples - total_number_of_5_multiples + total_number_of_3_and_5_multiples << endl;

  return 0;
}
