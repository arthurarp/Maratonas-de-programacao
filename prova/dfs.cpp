#include <bits/stdc++.h>

using namespace std;

const int MAX { 200010 };

bitset<MAX> visited;
vector<int> adj[MAX];

void dfs(int u)
{
  if (visited[u]) return;

  visited[u] = true;

  for (auto v : adj[u])
    dfs(v);
}

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  


  return 0;
}
