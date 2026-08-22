#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);

  int t; cin >> t;
  
  for(int y = 0; y < t; ++y) {
    int n; cin >> n;

    int v[n];
    for (int i = 0; i < n; ++i) {
      int c; cin >> c;

      v[i] = c;
    }
    if (n == 1) {
      cout << 1 << endl;
      continue;
    }

    int elements = 0;

    for (int i = 0; i < (n - 1); ++i) {
      if (v[i] > v[i + 1]) {
        elements++;
      }

    }

    if (elements == 0)
      cout << n << endl;
    else
      cout << 1 << endl;
    

  }


  

  return 0;
}