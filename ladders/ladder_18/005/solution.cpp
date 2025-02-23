#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      cout << string(m, '#') << '\n';
    } else if (i % 4 == 1) {
      cout << string(m - 1, '.') << "#\n";
    } else {
      cout << '#' << string(m - 1, '.') << '\n';
    }
  }

  return 0;
}
