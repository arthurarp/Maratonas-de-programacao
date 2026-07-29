#include <bits/stdc++.h>

using namespace std;

int verify_vector(int* v, int n) {
    for (int i = 0; i < n; ++i) {
        if (v[i] == 0)
            return 0;
    }

    return 1;
}

int main(void)
{
    int t; cin >> t;

    while(t--) {

          int n; cin >> n;

          string s; cin >> s;

          if (n == 1) {
              cout << "NO\n";
              continue;
          }

          int index = 0;

          int vector[n];
          
          while (1) {
                int result = verify_vector(&vector);
                if (result == )
                if (index + 1 == n)
                    continue;
                if (vector[index] == 1) {
                    index++;
                    continue;
                }

                int last_valid = index;
                
                if (s[index] == s[index + 1]) {
                    vector[index] = 1;
                    vector[index + 1] = 1;
                }

                index++;
          }
          
          cout << find_out << endl;
    }

  return 0;
}