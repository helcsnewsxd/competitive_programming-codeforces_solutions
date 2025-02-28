#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

const double EPS = 1e-12;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  vector<double> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  double ans = 0;
  for (int msk = 1, lim = (1 << n); msk < lim; msk++) {
    /** Brute Brute
    double prod = 1, sum = 0;
    for (int i = 0; i < n; i++) {
      if (msk & (1 << i)) {
        prod *= 1 - p[i];
      }
    }
    for (int i = 0; i < n; i++) {
      if (msk & (1 << i)) {
        sum += prod / (1 - p[i]) * p[i];
      }
    }
    ans = max(ans, sum);
    **/

    // Brute intelligent
    int cnt = __builtin_popcount(msk);
    double act = 0;

    if (cnt == 1) {
      for (int i = 0; i < n; i++) {
        if (msk & (1 << i)) {
          act = p[i];
          break;
        }
      }
    } else {
      double prod = 1, sum = 0;
      for (int i = 0; i < n; i++) {
        if (msk & (1 << i)) {
          prod *= 1 - p[i];
          sum += 1 / (1 - p[i]);
        }
      }
      act = prod * (sum - double(cnt));
    }

    ans = max(ans, act);
  }

  cout << fixed << setprecision(12) << ans << '\n';

  return 0;
}
