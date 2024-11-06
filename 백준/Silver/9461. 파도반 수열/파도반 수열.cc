#include <bits/stdc++.h>

using namespace std;

long long cal(long long N) {
  long long result = N; 
  long long arr[10000] = {0,};

  if (N <= 3) {
    return 1;
  } else if (N <= 5)
  {
    return 2;
  }
  
  arr[0] = arr[1] = arr[2] = 1;
  arr[3] = arr[4] = 2;

  for (long long i = 5; i < N; i++) {
    arr[i] = arr[i - 5] + arr[i - 1];
  }

  result = arr[N - 1];

  return result;
}

int main() {
  long long T, X;
  cin >> T;

  long long arr[100] = {0,};

  for (long long i = 0; i < T; i++) {
    cin >> X;
    arr[i] = X;
  }
    
  for (long long i = 0; i < T; i++) {
    cout << cal(arr[i]) << "\n";
  }
}