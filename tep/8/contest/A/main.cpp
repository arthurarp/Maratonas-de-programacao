#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);

  string s; cin >> s;

  for(int i = 0; i < s.size() - 1; ++i)
  {
    if(s[i] == s[i + 1])
    {
      cout << "Bad\n";
      return 0;
    }

  }

  cout << "Good\n";

  return 0;
}
