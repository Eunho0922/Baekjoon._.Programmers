#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int M, N, x, y;
    cin >> N >> M;
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    for (int i = 1; i < N; i++) {
        arr[i] += arr[i-1];
    }

    for (int i = 0; i < M; i++) {
        cin >> x >> y;
        if (x == 1) {
            cout << arr[y - 1] << "\n";
        } else {
            cout << arr[y - 1] - arr[x - 2] << "\n";
        }
        
    }
}
