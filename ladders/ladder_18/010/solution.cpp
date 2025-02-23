#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  int d = 0;
  while (n > 0) {
    n -= 1;

    if ((d + 1) % m == 0) {
      n += 1;
    }

    d += 1;
  }

  cout << d << '\n';

  return 0;
}
