#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum = 0, input = 0;
    for (int i = 0; i < 5; i++) {
        cin >> input;
        sum += input * input;
    }
    
    cout << sum % 10;
    
    
}