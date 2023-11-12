#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a;
    cin >> a;
    
    stack<int> stk;
    
    for (int i = 1; i <= a ; i++) {
        string input;
        cin >> input;
        
        if (input == "push") {
            int num;
            cin >> num;
            stk.push(num);
        } else if(input == "pop") {
            if (stk.empty()) {
                cout << "-1\n";
            } else {
                cout << stk.top() << "\n";
                stk.pop();
            }
        } else if(input == "size") {
            cout << stk.size() << "\n";
        } else if (input == "empty") {
            cout << stk.empty() << "\n";
        } else {
            if (stk.empty()) {
                cout << "-1\n";
            } else {
                cout << stk.top() << "\n";
            }
        }
    }
    return 0;
}
