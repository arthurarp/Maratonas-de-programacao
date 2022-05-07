#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);

  int t; cin >> t;

  while (t--)
  {
    string s; cin >> s;

    char minor = s[0];
    int index_of_minor = 0;
    string rest;

    for (int i = 1; i < s.size(); ++i)
    {
      if (s[i] < minor)
      {
        minor = s[i]; 
        index_of_minor = i;

      }
    } 
    s.erase(index_of_minor, 1);

    cout << minor << " " << s << endl;

  }

  return 0;
}
