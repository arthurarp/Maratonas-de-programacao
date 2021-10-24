#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(void)
{
  ios::sync_with_stdio(false);

  int t; cin >> t;

  for (int i = 0; i < t; ++i)
  {
    int n; cin >> n;
    vector<ll> v;
    
    for (int i = 0; i < n; ++i)
    {
      ll arrayElement; cin >> arrayElement;

      v.push_back(arrayElement);
    }

    ll arraySum = 0;
    ll zeros = 0;
    ll nearly_subsequences = 0;

    for (auto i : v)
    {
      arraySum += i;
      if (i == 0) ++zeros;
    }
    if (arraySum == 1 and zeros)
    {
      nearly_subsequences = pow(2, zeros);
    }
    else
    {
      for (auto i : v)
      {
        ll sum = arraySum - i;

        if (sum + 1 == arraySum)
          nearly_subsequences++;
      }
      nearly_subsequences = nearly_subsequences * pow(2, zeros);

    }
  
    cout << nearly_subsequences << endl;
  }

  return 0;
}
