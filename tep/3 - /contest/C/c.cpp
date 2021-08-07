#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int n, s;

  cin >> n >> s;

  int going[n + 1];
  int returning[n + 1];

  int max_station = -1;
  int min_station = -1;
  int max_defined = false;

  for (int i = 1; i <= n; ++i)
  {
    int g;
    cin >> g;
    if (g == 0 && i == 1)
    {
      max_station = 0;
      max_defined = true;
    }
    going[i] = g;

    if (g == 1 && !max_defined)
      max_station = i;
  }

  for (int i = 1; i <= n; ++i)
  {
    int r;
    cin >> r;
    returning[i] = r;
    if (r == 1)
      if (min_station == -1)
        min_station = i;
  }

  int changed_track = false;
  cout << "max: " << max_station << endl;
  cout << "min: " << min_station << endl;

  if (max_station < s)
  {
    cout << "NO\n";
    return 0;
  }
  else if (max_station == s)
  {
    cout << "YES\n";
    return 0;
  }
  else
  {
    for (int i = s + 1; i <= max_station; ++i)
    {
      if (going[i] == 1 && returning[i] == 1)
      {
        changed_track = true;
        break;
      }
    }
  }
  if (changed_track && returning[s] == 1)
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}