#include <bits/stdc++.h>
using namespace std;

int main(void) {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    stack<int> stk;
    
    for (int i = 1; i <= N; i++) {
        int num;
        cin >> num;
        if (num == 1) {
            int X;
            cin >> X;
            stk.push(X);
        } else if (num == 2) {
            if (stk.empty()) {
                cout << "-1\n";
            } else {
                cout << stk.top() << "\n";
                stk.pop();
            }
        } else if (num == 3) {
            cout << stk.size() << "\n";
        } else if (num == 4) {
            if (stk.empty()) {
                cout << "1\n";
            } else {
                cout << "0\n";
            }
        } else if (num == 5) {
            if (stk.empty()) {
                cout << "-1\n";
            } else {
                cout << stk.top() << "\n";
            }
        } else {
            break;
        }
    }
    return 0;
}
