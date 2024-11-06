#include <bits/stdc++.h>

using namespace std;

int fib_count_1 = 0;
int fib_count_2 = 0;

int fib(int n) {
  if (n == 1 || n == 2) {
    fib_count_1++;
    return 1;
  } else {
    return (fib(n -1) + fib(n - 2));
  }
}

int fibonacci(int n) {
  int f[100];
  f[1] = f[2] = 1;

  for (int i = 3; i <= n; i++) {
    fib_count_2++;
    f[i] = f[i-1] + f[i-2];
  }
  return f[n];
}

int main() {
  int N;
  cin >> N;

  fib(N);
  fibonacci(N);

  cout << fib_count_1 << " " << fib_count_2;

  return 0;
}