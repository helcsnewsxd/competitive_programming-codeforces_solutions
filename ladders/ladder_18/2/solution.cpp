#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> row(100, 0), col(100, 0);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;

    for (int j = 0; j < a; j++) {
      row[j]++;
      col[n - row[j]]++;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << col[i] << ' ';
  }
  cout << '\n';

  return 0;
}
