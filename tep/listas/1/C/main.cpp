#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int n; cin >> n;
  
  while(n--)
  {
    string word; cin >> word;
    if(word.size() <= 10)
      cout << word << endl;
    else
      cout << word[0] << word.size() - 2 << word[word.size() - 1] << endl;
  }

  return 0;
}