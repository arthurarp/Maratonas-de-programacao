#include <bits/stdc++.h>

using namespace std;

char getGreater(int a, int b, int c)
{
  char greater;

  if (b > a and b > c)
    greater = 'b';
  else if (c > a and c > b)
    greater = 'c';
  else
    greater = 'a';

  return greater;
}

int main(void)
{
  ios::sync_with_stdio(false);

  int n; cin >> n;

  while(n--)
  {
    int a, b, c; cin >> a >> b >> c;

    char greater = getGreater(a, b, c);
    int result_a, result_b, result_c;

    if (a == b and a == c)
    {
      result_a = a + 1;
      result_b = a + 1;
      result_c = a + 1;
    }
    else if (greater == 'a')
    {
      result_a = 0;
      result_b = (a - b) + 1;
      result_c = (a - c) + 1;
    }

    else if (greater == 'b')
    {
      result_a = (b - a) + 1;
      result_b = 0;
      result_c = (b - c) + 1;
    }
    else
    {
      result_a = (c - a) + 1;
      result_b = (c - b) + 1;
      result_c = 0;
    }

    cout << result_a << " " << result_b << " " << result_c << endl;
  }


  return 0;
}
