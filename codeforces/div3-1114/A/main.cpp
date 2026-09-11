#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;

  while(t--) {
    int a, b, c; cin >> a >> b >> c;

    int rounds = 0;

    vector<int> v;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    sort(v.begin(), v.end());

    for (;;) {
      if (v[0] == v[1] or v[1] == v[2])
        break;

        v[0]++;
        v[2]--;

      
      ++rounds;
    }

    cout << rounds << endl;
  }
  

  return 0;
}
