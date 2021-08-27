#include <bits/stdc++.h>

using namespace std;

int main(void)
{

  string s; cin >> s;

  int index_c = s.find('C');
  int size = s.size();
  int occurrences = count(s.begin(), s.end(), 'C');
  
  if( (s.front() != 'A') or (occurrences > 1) or (index_c < 2 or index_c > size - 2))
  {
    cout << "WA\n";
    return 0;
  }

  for(char c : s)
  {
    if(!islower(c) and (c != 'A' and c != 'C'))
    {
      cout << "WA\n"; 
      return 0;

    }

  }

  cout << "AC" << endl;

  return 0;
}