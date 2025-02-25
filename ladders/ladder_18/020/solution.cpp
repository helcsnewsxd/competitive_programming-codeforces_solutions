#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, a, b, c;
  cin >> n >> a >> b >> c;

  int ans = 0;
  for (int i = 0; i < n + 1; i++) {
    for (int j = 0; j < n + 1; j++) {
      int act = n - i * a - j * b;
      if (act >= 0 && act % c == 0) {
        ans = max(ans, i + j + act / c);
      }
    }
  }
  cout << ans << '\n';

  return 0;
}
