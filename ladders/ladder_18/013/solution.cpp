#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  long long l, r;
  cin >> l >> r;

  if (r - l + 1 < 3 || (l % 2 == 1 && r - l + 1 == 3)) {
    cout << "-1\n";
    return 0;
  }

  if (r % 2 == 0) {
    cout << r - 2 << ' ' << r - 1 << ' ' << r << '\n';
  } else {
    cout << r - 3 << ' ' << r - 2 << ' ' << r - 1 << '\n';
  }

  return 0;
}
