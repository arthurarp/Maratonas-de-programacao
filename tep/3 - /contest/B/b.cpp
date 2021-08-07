#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int N;

  cin >> N;

  if (N % 4 == 0 || N % 7 == 0)
  {
    cout << "Yes\n";
    return 0;
  }
  else
    for (int four = 1; four < 100; ++four)
    {
      for (int seven = 1; seven < 100; ++seven)
      {
        int sum = 4 * four + 7 * seven;

        if (sum == N)
        {
          cout << "Yes\n";
          return 0;
        }
      }
    }

  cout << "No\n";
  return 0;
}