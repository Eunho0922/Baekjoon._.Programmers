#include <iostream>

#include <bits/stdc++.h>
using namespace std;


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string chk;
    int i;
    string str;
    cin >> str;
    chk = str;
    reverse(chk.begin(), chk.end());
    
    if (chk == str) {
        cout << "1";
    }else {
        cout << "0";
    }
    
    
    
    

    
}
