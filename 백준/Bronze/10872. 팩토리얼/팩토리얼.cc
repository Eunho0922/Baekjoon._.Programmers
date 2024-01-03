#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    
    int sum = 1;
    int x;
    cin >> x;
    for(int i = x; i > 0; i--) {
        sum *= i;
    }
    cout << sum;
        
}