#include <bits/stdc++.h>

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

  sort(p.begin(), p.end());
  reverse(p.begin(), p.end());

  if (n == 1 || 0.5 < p[0] + EPS) {
    cout << fixed << setprecision(12) << p[0] << '\n';
  } else {
    double prod = 1, sum = 0, ans = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      prod *= 1 - p[i];
      sum += 1 / (1 - p[i]);
      cnt++;

      ans = max(ans, prod * (sum - double(cnt)));
    }
    cout << fixed << setprecision(12) << ans << '\n';
  }

  return 0;
}
