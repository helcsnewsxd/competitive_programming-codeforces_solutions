#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  if (x1 == x2) {
    int diff = abs(y2 - y1);
    cout << x1 + diff << ' ' << y1 << ' ' << x2 + diff << ' ' << y2 << '\n';
  } else if (y1 == y2) {
    int diff = abs(x2 - x1);
    cout << x1 << ' ' << y1 + diff << ' ' << x2 << ' ' << y2 + diff << '\n';
  } else if (abs(x2 - x1) != abs(y2 - y1)) {
    cout << "-1\n";
  } else {
    cout << x1 << ' ' << y2 << ' ' << x2 << ' ' << y1 << '\n';
  }

  return 0;
}
