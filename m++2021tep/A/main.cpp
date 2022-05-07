#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);

  int i, n; cin >> i >> n;
  int number = 0;
  for (int j = 1; j <= n; j++)
  {
    if (n % 2 == 0)
    {
      number = i + n - 1;
    }
    else
    {
      number = -1;
    }
  }

  cout << number << endl;
  
  return 0;
}
