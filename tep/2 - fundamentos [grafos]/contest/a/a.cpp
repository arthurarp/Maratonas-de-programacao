#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int takahashi = 0;

  string input;

  cin >> input;

  for (auto c : input)
  {
    if (c == '+')
      takahashi++;
    else
      takahashi--;
  }

  cout << takahashi << endl;

  return 0;
}