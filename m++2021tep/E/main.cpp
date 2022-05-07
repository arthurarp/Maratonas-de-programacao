#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);

  int N, R; cin >> N >> R;

  vector<int> v(N + 1);

  for (int i = 0; i <= N; i++)
    v[i] = 0;

  for (int i = 0; i < R; ++i)
  {
    int x, y; cin >> x >> y;

    v[x]++;
    v[y]++;
  } 

  int sum = 0;
  for (int i = 1; i <= N; ++i)
    sum += (N - 1) - v[i];

  cout << sum / 2 << endl;

  return 0;
}
