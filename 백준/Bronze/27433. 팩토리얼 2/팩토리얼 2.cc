#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;

  ll factorial = 1;
  for (int i = 1; i <= n; i++)
    factorial *= i;

  cout << factorial << "\n";

  return 0;
}