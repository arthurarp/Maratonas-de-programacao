#include <bits/stdc++.h>

using namespace std;

bool prime(int number)
{
  int qtd = 0;
  if (number == 1)
    return false;
  if (number == 2 or number == 3)
    return true;

  for (int i = 1; i <= number; ++i)
  {
    if (number % i == 0)
      qtd++;
  }
  if (qtd == 2)
    return true;
  return false;
}

int main(void)
{
  int N;

  cin >> N;

  for (int i = 1; i <= 1000; ++i)
  {
    int result = N * i + 1;

    if (!prime(result))
    {
      cout << i << endl;
      break;
    }
  }

  return 0;
}