#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio();
    cin.tie(NULL);
    
    stack<int> stk;
    
    int K;
    cin >> K;
    
    for (int i = 0; i < K; i++) {
        int num;
        cin >> num;
        if (num == 0) {
            stk.pop();
        } else {
            stk.push(num);
        }
    }
    
    int result = 0;
    while (!stk.empty()) {
        result += stk.top();
        stk.pop();
    }
    
    cout << result;
}