#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, s;
  cin >> n >> s;

  int ans = -1;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    if (s >= x + (y > 0)) {
      ans = max(ans, (y > 0 ? 100 - y : 0));
    }
  }
  cout << ans << '\n';

  return 0;
}
