#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int cnt = (i <= (n - 1) / 2) ? i * 2 + 1 : (n - i - 1) * 2 + 1;
    cout << string((n - cnt) / 2, '*') << string(cnt, 'D')
         << string((n - cnt) / 2, '*') << '\n';
  }

  return 0;
}
