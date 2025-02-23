#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;

  string t = "hello$";
  int idx = 0;
  for (int i = 0, n = int(s.size()); i < n; i++) {
    if (s[i] == t[idx]) {
      idx++;
    }
  }

  cout << (t[idx] == '$' ? "YES" : "NO") << '\n';

  return 0;
}
