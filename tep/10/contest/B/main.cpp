#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);

  int n; cin >> n;
  vector<int> v;

  for(int i = 0; i < n; ++i)
  {
    int number; cin >> number;

    v.push_back(number);
  }
  double divisor = 0;
  for(int i = 0; i < n; ++i)
    divisor += (1.0 / v[i]);
  
  double result = 1.0 / divisor;

  cout << result << endl;

  return 0;
}
