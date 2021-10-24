#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(true);

  int t, x; cin >> t >> x;

  double T = t+= 0.0000000000;
  double X = x+= 0.0000000000;

  printf("%.10lf\n", T / X);

  return 0;
}
