#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> do_oper(const vector<pair<int, int>> &a,
                               const vector<pair<int, int>> &b, bool is_OR) {
  vector<pair<int, int>> r;

  pair<int, int> i = {0, 0}, sz = {a.size(), b.size()};
  while (i.first < sz.first && i.second < sz.second) {
    int value = (is_OR ? a[i.first].second | b[i.second].second
                       : a[i.first].second ^ b[i.second].second);
    r.push_back({max(a[i.first].first, b[i.second].first), value});
    if (i.first == sz.first - 1)
      i.second++;
    else if (i.second == sz.second - 1)
      i.first++;
    else if (a[i.first + 1].first < b[i.second + 1].first)
      i.first++;
    else
      i.second++;
  }

  return r;
}

vector<pair<int, int>> operator^(const vector<pair<int, int>> &a,
                                 const vector<pair<int, int>> &b) {
  return do_oper(a, b, false);
}

vector<pair<int, int>> operator|(const vector<pair<int, int>> &a,
                                 const vector<pair<int, int>> &b) {
  return do_oper(a, b, true);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  // Get values
  int n, m;
  cin >> n >> m;

  vector<vector<pair<int, int>>> a;
  for (int i = 0, N = (1 << n); i < N; i++) {
    int x;
    cin >> x;
    a.push_back({{0, x}});
  }

  for (int i = 1; i <= m; i++) {
    int p, b;
    cin >> p >> b;

    a[p - 1].push_back({i, b});
  }

  // Simulate
  bool is_OR = true;
  while (int(a.size()) > 1) {
    vector<vector<pair<int, int>>> a_aux;
    for (int i = 0, N = a.size(); i < N; i += 2)
      a_aux.push_back(is_OR ? (a[i] | a[i + 1]) : (a[i] ^ a[i + 1]));
    a = a_aux;
    is_OR ^= 1;
  }

  // Print answer
  for (auto &x : a[0])
    if (x.first > 0)
      cout << x.second << ' ';
  cout << '\n';

  return 0;
}
