#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  string b;
  cin >> n >> b;

  int pref = 0;
  while (b[pref++] == '1')
    ;
  pref = min(pref, n);

  cout << pref << '\n';

  return 0;
}
