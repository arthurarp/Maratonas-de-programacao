#include <bits/stdc++.h>

using namespace std;


int main(void)
{

  string n; cin >> n;

  for(char& c : n )
  {
    if(c == '1')
      c = '9';
    else
      c = '1';
  }
  cout << n << endl;

  return 0;
}