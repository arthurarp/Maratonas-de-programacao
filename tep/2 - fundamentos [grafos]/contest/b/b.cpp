#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int D, N;

  cin >> D >> N;

  int result = pow(100, D);

  if (N == 100)
    cout << result * N + result << endl;
  else
    cout << result * N << endl;

  return 0;
}