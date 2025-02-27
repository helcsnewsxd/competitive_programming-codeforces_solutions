#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  long long n, m;
  cin >> n >> m;

  vector<long long> a(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }

  long long ans = 1e18 + 7;
  for (long long i = 1; i <= n; i++) {
    for (long long j = 1; j <= n; j++) {
      long long act = 0;
      for (int p = 0; p < m - 1; p++) {
        long long A = (a[p] == i ? j : a[p]);
        long long B = (a[p + 1] == i ? j : a[p + 1]);
        act += abs(B - A);
      }
      ans = min(ans, act);
    }
  }
  cout << ans << '\n';

  return 0;
}
