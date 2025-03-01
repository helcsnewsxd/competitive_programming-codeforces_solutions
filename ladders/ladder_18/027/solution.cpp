#include <bits/stdc++.h>

using namespace std;

/**
 * Calculates the Z array for a given string.
 *
 * @param s: the given string
 * @return z: vector with all the values of Z function applied to s
 * @note z[i] = max{k : s[0..k) = s[i..i+k)}
 * @note O(s.size())
 * @reference [CP-Algorithms](https://cp-algorithms.com/string/z-function.html)
 */
vector<int> z_function(const string &s) {
  int n = s.size(), l = 0, r = 0;
  vector<int> z(n);
  for (int i = 1; i < n; i++) {
    if (i < r)
      z[i] = min(r - i, z[i - l]);
    while (i + z[i] < n && s[z[i]] == s[i + z[i]])
      z[i]++;
    if (i + z[i] > r)
      l = i, r = i + z[i];
  }
  return z;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;

  int n = s.size(), middle = 0;
  vector<int> z = z_function(s), suffix;

  for (int i = 1; i < n; i++) {
    if (i + z[i] == n)
      suffix.push_back(z[i]), middle = max(middle, z[i] - 1);
    else
      middle = max(middle, z[i]);
  }

  int length = 0;
  for (int &x : suffix)
    if (x <= middle)
      length = max(length, x);

  cout << (length ? s.substr(0, length) : "Just a legend") << '\n';

  return 0;
}
