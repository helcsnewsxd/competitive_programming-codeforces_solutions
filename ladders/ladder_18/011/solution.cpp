#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  vector<bool> lvl(n, false);
  for (int i = 0; i < 2; i++) {
    int p;
    cin >> p;
    for (int j = 0; j < p; j++) {
      int a;
      cin >> a;
      lvl[a - 1] = true;
    }
  }

  bool can_pass = true;
  for (int i = 0; i < n; i++) {
    can_pass = (can_pass && lvl[i]);
  }

  cout << (can_pass ? "I become the guy." : "Oh, my keyboard!") << '\n';

  return 0;
}
