#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);

  int t; cin >> t;

  while (t--) {
    int n; cin >> n;

    int max = 0;

    int v[20];

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        v[i] = x;
        if (x > max)
        max = x;
    }
    int possibly_winners = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] == max) {
            possibly_winners++;
        }

    }
        

    
    cout << possibly_winners << endl;


  }

  return 0;
}
