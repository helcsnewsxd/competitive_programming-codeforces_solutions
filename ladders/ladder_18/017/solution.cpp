#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m, a, b;
  cin >> n >> m >> a >> b;

  cout << (n / m) * min(a * m, b) + min((n % m) * a, b) << '\n';

  return 0;
}
