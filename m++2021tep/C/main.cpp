#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);

  int c; cin >> c;
  cin.ignore();

  vector<string> stack;

  for (int i = 0; i < c; ++i)
  {
    string a;
    getline(cin, a);

    if (a[0] == '+')
    {
      string newString = a.substr(2);
      stack.push_back(newString);
    }
    else
    {
      if(stack.size() == 0)
      {
        cout << "Backlog vazio" << endl;
      }
      else
      {
        cout << stack.back() << endl;
        stack.pop_back();
      }
    }
  }


  return 0;
}
