#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int n;
  double d;
  cin >> n >> d;

  int qtd = 0;

  for (int i = 0; i < n; ++i)
  {
    double x, y;
    cin >> x >> y;

    double aux = x * x + y * y;

    double distance = sqrt(aux);
    if (distance <= d)
      qtd++;
  }

  cout << qtd << endl;

  return 0;
}