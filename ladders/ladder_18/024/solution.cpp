#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  vector<long long> a(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }

  vector<vector<long long>> nxt(n + 1);
  vector<long long> ant(n + 1);
  long long total = 0;
  for (int i = 0; i < m - 1; i++) {
    if (a[i] == a[i + 1]) {
      continue;
    }

    nxt[a[i]].push_back(a[i + 1]);
    nxt[a[i + 1]].push_back(a[i]);

    total += abs(a[i + 1] - a[i]);
    ant[a[i]] += abs(a[i + 1] - a[i]);
    ant[a[i + 1]] += abs(a[i + 1] - a[i]);
  }

  for (int i = 0; i <= n; i++) {
    sort(nxt[i].begin(), nxt[i].end());
  }

  long long ans = total;
  for (long long i = 1; i <= n; i++) {
    auto f = [&](long long s) -> long long {
      long long nw = 0;
      for (auto &x : nxt[i]) {
        nw += abs(s - x);
      }
      return nw;
    };

    int sz = int(nxt[i].size());
    if (sz == 0) {
      continue;
    } else if (sz % 2 != 0) {
      ans = min(ans, total - ant[i] + f(nxt[i][sz / 2]));
    } else {
      ans = min(ans,
                total - ant[i] + max(f(nxt[i][sz / 2 - 1]), f(nxt[i][sz / 2])));
    }
  }

  cout << ans << '\n';

  return 0;
}
