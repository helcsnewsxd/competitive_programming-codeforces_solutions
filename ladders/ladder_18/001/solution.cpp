#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  int left = 0, right = n - 1;
  vector<int> score(2, 0);
  bool turn = 0;
  while (left <= right) {
    if (v[left] > v[right]) {
      score[turn] += v[left];
      left++;
    } else {
      score[turn] += v[right];
      right--;
    }
    turn ^= 1;
  }

  for (int i = 0; i < 2; i++) {
    cout << score[i] << ' ';
  }
  cout << '\n';

  return 0;
}
