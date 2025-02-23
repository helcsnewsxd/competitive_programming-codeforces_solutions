#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  vector<int> f(m);
  for (int i = 0; i < m; i++) {
    cin >> f[i];
  }
  sort(f.begin(), f.end());

  int ans = 1e9 + 7;
  for (int i = 0, j = n - 1; j < m; i++, j++) {
    ans = min(ans, f[j] - f[i]);
  }
  cout << ans << '\n';

  return 0;
}
