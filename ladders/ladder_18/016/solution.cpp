#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;
  s = '$' + s;
  int n = int(s.size()) + 1;

  vector<int> cnt(n);
  for (int i = 0; i < n; i++) {
    cnt[i] = (i < n - 1 && s[i] == s[i + 1]);
    if (i != 0) {
      cnt[i] += cnt[i - 1];
    }
  }

  int q;
  cin >> q;
  while (q--) {
    int l, r;
    cin >> l >> r;
    cout << cnt[r - 1] - cnt[l - 1] << '\n';
  }

  return 0;
}
