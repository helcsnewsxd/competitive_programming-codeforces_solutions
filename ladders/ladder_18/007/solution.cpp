#include <bits/stdc++.h>

using namespace std;

bool solvable(const int &n, const int &m, const vector<int> &h) {
  int e = 0, ant = m;
  for (int i = 0; i < n; i++) {
    e += (ant - h[i]);
    ant = h[i];

    if (e < 0) {
      return false;
    }
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }

  int s = 0, e = 1e5 + 7;
  while (s + 1 < e) {
    int m = (s + e) / 2;
    if (solvable(n, m, h)) {
      e = m;
    } else {
      s = m;
    }
  }
  if (solvable(n, s, h)) {
    e = s;
  }

  cout << e << '\n';

  return 0;
}
