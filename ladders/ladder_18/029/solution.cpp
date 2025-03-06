#include <bits/stdc++.h>

using namespace std;

const int MAXN = 60;
string gmap[MAXN];
bool vis[MAXN][MAXN];
vector<pair<int, int>> vec = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool dfs(int i, int j, int pi, int pj) {
  bool r = false;
  vis[i][j] = true;
  for (auto &[x, y] : vec)
    if (gmap[i + x][j + y] == gmap[i][j]) {
      if (vis[i + x][j + y])
        r |= (i + x != pi && j + y != pj);
      else
        r |= dfs(i + x, j + y, i, j);
    }
  return r;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  gmap[0] = gmap[n + 1] = string(m + 2, '$');
  for (int i = 1; i < n + 1; i++) {
    string s;
    cin >> s;
    gmap[i] = "$" + s + "$";
  }

  for (int i = 1; i < n + 1; i++)
    for (int j = 1; j < m + 1; j++)
      if (!vis[i][j])
        if (dfs(i, j, -1, -1)) {
          cout << "Yes\n";
          return 0;
        }

  cout << "No\n";

  return 0;
}
