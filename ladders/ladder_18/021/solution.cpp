#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m, b;
  long long MOD;
  cin >> n >> m >> b >> MOD;

  vector<long long> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  long long dp[507][507];
  dp[0][0] = 1;
  for (int i = 0; i < n; i++) {
    for (int cm = 0; cm <= m; cm++) {
      for (int cb = 0; cb <= b; cb++) {
        if (cm + 1 <= m && cb + a[i] <= b) {
          dp[cm + 1][cb + a[i]] = (dp[cm + 1][cb + a[i]] + dp[cm][cb]) % MOD;
        }
      }
    }
  }

  long long ans = 0;
  for (int cb = 0; cb <= b; cb++) {
    ans = (ans + dp[m][cb]) % MOD;
  }
  cout << ans << '\n';

  return 0;
}
