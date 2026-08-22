#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);

    int t; cin >> t;

    while(t--) {

      int n; cin >> n;

      // if (n == 1) {
      //   cout << 1 << endl;
      //   return 0;
      // }

      vector<int> a(11, 0);
      for(int i = 1; i <= n; ++i) {
        cout << "[" << i << "]:" << a[i] << endl;

      }

      int top_int = 0;

      for(int i = 1; i <= n; ++i) {

        int j; cin >> j;

        a[i] = j;

        if(j > top_int) 
          top_int = j;

      }

      // for(int i = 1; i <= n; ++i) {
      //   cout << "[" << i << "]:" << a[i] << endl;

      // }

      for(int i = 1; i < top_int; ++i) {
        cout << "[" << i << "]:" << a[i] << endl;
        a[i]--;

      }

      int count_winners = 0;

      for(int i = 0; i <= a.size(); ++i) {
          if (a[i] == 1)
            count_winners++;
      }

      cout << count_winners << endl;


    }
  


  return 0;
}
