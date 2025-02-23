#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int a, b, c;
  cin >> a >> b >> c;

  int ans = max({
      a + b + c,
      (a + b) * c,
      a * (b + c),
      (a * b) + c,
      a + (b * c),
      a * b * c,
  });

  cout << ans << '\n';

  return 0;
}
