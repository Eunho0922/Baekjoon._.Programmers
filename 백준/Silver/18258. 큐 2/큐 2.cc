#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    queue<int>(que);
    
    int count;
    cin >> count;
    
    for (int i = 0; i < count; i++) {
        string command;
        cin >> command;
   
        if (command == "push") {
            int value;
            cin >> value;
            que.push(value);
        } else if (command == "pop") {
            if (que.empty()) 
            { 
                cout << "-1\n";
            } else {
                cout << que.front() << "\n";
                que.pop();
            }
        } else if (command == "size") {
            cout << que.size() << "\n";
        } else if (command == "empty") {
            if (que.empty()) {
                cout << "1\n";
            } else {
                cout << "0\n";
            }
        } else if (command == "front") {
            if (que.empty())
            {
                cout << "-1\n";
            } else {
                cout << que.front() << "\n";
            }
        } else if (command == "back") {
            if (que.empty())
            {
                cout << "-1\n";
            } else {
                cout << que.back() << "\n";
            }
        } else {
            return 0;
        }
    }
}
