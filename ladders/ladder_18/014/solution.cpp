#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> a(n);
  int sum = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }

  for (int i = 0; i < n; i++) {
    int zero = 0, one = 0;
    for (int j = i; j < n; j++) {
      if (a[j] == 1) {
        one++;
      } else {
        zero++;
      }

      ans = max(ans, sum - one + zero);
    }
  }

  cout << ans << '\n';

  return 0;
}
