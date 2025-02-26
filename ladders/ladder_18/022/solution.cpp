#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> a(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    a[i] = a[i - 1] + (a[i] - 1);
  }

  vector<pair<int, int>> ans;
  for (int t = 1; t <= n; t++) {
    pair<int, int> points = {0, 0};
    bool last_winner = 0;

    int idx = 1;
    while (idx <= n) {
      int s = idx - 1, e = n + 1;
      while (s + 1 < e) {
        int m = (s + e) / 2;
        int wins = a[m] - a[idx - 1];
        if (max(wins, m - idx + 1 - wins) >= t) {
          e = m;
        } else {
          s = m;
        }
      }

      if (e > n) {
        idx = n + 2;
        break;
      }
      int wins = a[e] - a[idx - 1];
      if (wins == t) {
        points.first++;
        last_winner = 0;
      } else if (e - idx + 1 - wins == t) {
        points.second++;
        last_winner = 1;
      } else {
        idx = n + 2;
        break;
      }

      idx = e + 1;
    }

    if (idx == n + 1 && points.first != points.second) {
      if (points.first < points.second) {
        swap(points.first, points.second);
        last_winner ^= 1;
      }

      if (last_winner == 0) {
        ans.push_back({max(points.first, points.second), t});
      }
    }
  }

  sort(ans.begin(), ans.end());
  cout << int(ans.size()) << '\n';
  for (auto &[x, y] : ans) {
    cout << x << ' ' << y << '\n';
  }

  return 0;
}
