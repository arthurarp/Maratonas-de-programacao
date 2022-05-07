#include <bits/stdc++.h>

using namespace std;

typedef struct Vertex
{
  int v;
  vector<int> neighbors;

} vertex;


void print(const vector<vertex> v)
{
  for (auto i : v)
  {
    cout << i.v << ": ";
    for (auto j : i.neighbors)
    {
      cout << j << " ";
    }
    cout << endl << endl;
  }
}

int main(void)
{
  ios::sync_with_stdio(false);

  int n, e; cin >> n >> e;

  vector<vertex> graph;

  for (int i = 1; i <= n; i++)
  {
    graph.push_back({i, vector<int>()});
  }
  for (int i = 0; i < e; i++)
  {
    int a, b; cin >> a >> b;

    vector<int> v = graph[a].neighbors;
    v.push_back(b);

    graph[a].neighbors = v;

  }

  print(graph);

  return 0;
}
