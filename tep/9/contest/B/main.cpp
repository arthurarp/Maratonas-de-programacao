#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);

  int n; cin >> n;
  int total = 0;

  for(int i = 1; i <= n; ++i)
  {
    string s = to_string(i);
    // cout << s.size() << endl;

    if(s.size() % 2 == 0)
      continue;
    else
      total++;
    
  }

  cout << total << endl;

  return 0;
}
