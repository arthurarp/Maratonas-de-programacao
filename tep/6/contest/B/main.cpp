#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);

  int N; cin >> N;
  int sum = 0;
  int highest = 0;

  while(N--)
  {
    int x; cin >> x;
    
    if(x > highest)
      highest = x;

    sum += x;
  }

  if(highest < sum - highest)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  

  return 0;
}
