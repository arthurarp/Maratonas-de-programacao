#include <bits/stdc++.h>

using namespace std;

void print(vector<vector<char>> v, int H, int W)
{
  for(auto lines : v)
  {
    for(auto columns : lines)
    {
      cout << columns << ' ';
    }
    cout << endl;
  }
}

int main(void)
{
  ios::sync_with_stdio(false);

  int H, W; cin >> H >> W;

  vector<vector<char>> v;

  for(int i = 0; i < H; ++i)
  {
    for(int j = 0; j < W; ++j)
    {
      char element;
      cin >> element;

      v[i].push_back(element);
    }
  }

  print(v, H, W);
  
  int new_n_lines = H;

  for(int i = 0; i < H; ++i)
  {
    int white = count(v[i].begin(), v[i].end(), '.');

    if(white == W)
    {
      v.erase(v.begin() + i);
      --new_n_lines;
    }
  }

  for(int i = 0; i < H; ++i)
  {
    for(int j = 0; j < W; ++j)
    {
      char element;
      cin >> element;

      v[i].push_back(element);
    }
  }


  }

  print(v, new_n_lines, W);

  return 0;
}
