#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, k;
  cin >> n >> k;

  multiset<pair<int, int>> tw;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    tw.insert({a, i + 1});
  }

  vector<pair<int, int>> ans;
  while (k--) {
    pair<int, int> mov;

    auto lw = tw.begin();
    tw.erase(lw);
    mov.second = (*lw).second;
    tw.insert({(*lw).first + 1, mov.second});

    auto hg = --tw.end();
    tw.erase(hg);
    mov.first = (*hg).second;
    tw.insert({(*hg).first - 1, mov.first});

    if (mov.first != mov.second) {
      ans.push_back(mov);
    }
  }

  int diff = (*(--tw.end())).first - (*tw.begin()).first;
  cout << diff << ' ' << int(ans.size()) << '\n';
  for (auto &[x, y] : ans) {
    cout << x << ' ' << y << '\n';
  }

  return 0;
}
