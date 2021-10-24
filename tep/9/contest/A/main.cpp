#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);

  int a, b, c; cin >> a >> b >> c;

  int until_end =  a - b;
  int result;

  if(until_end <= c)
    result = c - until_end;
  else
    result = 0;

  cout << result << endl;

  return 0;
}
