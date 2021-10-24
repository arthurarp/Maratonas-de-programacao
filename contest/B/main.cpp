#include <bits/stdc++.h>

using namespace std;

#define MASTER 753

int main(void)
{
  ios::sync_with_stdio(false);

  string s; cin >> s;

  int minor_distance = INT_MAX;

  for(int i = 0; i <= s.size() - 3; ++i)
  {
    string aux = s.substr(i, 3); 
    int to_int = stoi(aux);   

    if(to_int == 753)
    {
      cout << 0 << endl;
      return 0;
    }
    else
    {
      int distance = abs(to_int - MASTER);
      if(distance < minor_distance)
        minor_distance = distance;
    }
  }

  cout << minor_distance << endl;
  return 0;
}
