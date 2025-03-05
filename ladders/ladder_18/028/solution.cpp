#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  vector<vector<int>> has_one(n + 1, vector<int>(31, 0));
  vector<pair<int, pair<int, int>>> range_zero;
  while (m--) {
    int l, r, q;
    cin >> l >> r >> q;
    l--;

    for (int i = 0; i < 31; i++) {
      if (q & (1 << i))
        has_one[l][i]++, has_one[r][i]--;
      else
        range_zero.push_back({i, {l, r}});
    }
  }

  // Set ones
  for (int j = 0; j < 31; j++) {
    for (int i = 1; i <= n; i++)
      has_one[i][j] += has_one[i - 1][j];
    for (int i = 0; i <= n; i++)
      has_one[i][j] = min(has_one[i][j], 1) + (i ? has_one[i - 1][j] : 0);
  }

  // Check zero condition
  for (auto &[b, r] : range_zero) {
    if (has_one[r.second - 1][b] - (r.first ? has_one[r.first - 1][b] : 0) >=
        r.second - r.first) {
      cout << "NO\n";
      return 0;
    }
  }

  // Print values
  cout << "YES\n";
  for (int i = 0; i < n; i++) {
    int val = 0;
    for (int j = 0; j < 31; j++) {
      bool one = has_one[i][j] - (i ? has_one[i - 1][j] : 0);
      val |= (one << j);
    }
    cout << val << ' ';
  }
  cout << '\n';

  return 0;
}
