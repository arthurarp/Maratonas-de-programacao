#include <bits/stdc++.h>

using namespace std;

int main(void)
{
  int N;
  int L;
  vector<int> vagoes;
  int swaps = 0;
  int vagao;

  cin >> N;


  for(int i = 0; i < N; i++)
  {
    cin >> L;

    for(int i = 0; i < L; i++)
    {
      cin >> vagao;
      vagoes.push_back(vagao);
    }

    for(int i = 0; i < L - 1; ++i)
    {
      for(int j = i + 1; j < L; j++)
      {
        if(vagoes.at(j) < vagoes.at(i))
        {
          swap(vagoes.at(i), vagoes.at(j));
          swaps++;
        }
      }
    }

    cout << "Optimal train swapping takes " <<  swaps << " swaps." << endl;
    vagoes.erase(vagoes.begin(), vagoes.end());
    swaps = 0;
  }


  return 0;
}
