#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  vector<vector<pair<int, int>>> add(n + 1), sub(n + 1);
  for (int i = 0; i < m; i++) {
    int l, r, x;
    cin >> l >> r >> x;
    --l, --r, --x;

    add[l].push_back({i, x + 1});
    sub[x].push_back({i, x + 1});

    if (r >= x + 1) {
      add[x + 1].push_back({i, x + 1});
      sub[r + 1].push_back({i, x + 1});
    }
  }

  set<pair<int, int>> s;
  vector<int> ans(n);
  for (int i = 0; i < n; i++) {
    for (auto &x : add[i]) {
      s.insert(x);
    }
    for (auto &x : sub[i]) {
      s.erase(x);
    }

    if (!s.empty()) {
      ans[i] = (*s.begin()).second;
    }
  }

  for (auto &x : ans) {
    cout << x << ' ';
  }
  cout << '\n';

  return 0;
}
