#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> v;


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x;
    int sum = 0;
    
    for (int i = 0; i < 5; i++) {
        cin >> x;
        v.push_back(x);
        sum += x;
    }
    
    sum /= 5;
    sort(v.begin(), v.end());
    
    cout << sum << "\n" << v[2];

    
    
}


