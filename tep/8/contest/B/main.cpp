#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);

  int n, l; cin >> n >> l;
  int sum = 0;
  int apple = -1;
  int smallest_value = INT_MAX;
  map<int,int> m;

  if(l >= 0)
  {
    for(int i = 2; i <= n; ++i)
      sum += l + i - 1;

    cout << sum << endl;
    return 0;
  }
  else
  {
    int total_sum = 0;
    int index;
    for(int i = 1; i <= n; ++i)
      total_sum += l + i - 1;
    

    for(int i = 1; i <= n; ++i)
    {
      pair<int,int> p;
      p.first = i;
      p.second =  (l + i - 1);
      m.insert(p);
    }

    // cout << smallest_diff << endl;
    // for(auto x : m)
    //   cout << "apple = " << x.first << " diff = " << x.second << endl;
    for(auto x : m)
    {
      if(abs(x.second) < smallest_value)
      {
        smallest_value = abs(x.second);
      }

    }
    cout << total_sum + smallest_value << endl;
  }


  return 0;
}
