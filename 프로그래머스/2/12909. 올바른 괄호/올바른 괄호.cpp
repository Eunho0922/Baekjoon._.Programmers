/*
    return true / false
    1. stack에 첫 번째 요소를 집어넣는다.
    2. 왼쪽 괄호 요소를 넣을 차례면 push를 한다/
    3. 오른쪽 괄호 요소를 넣을 차례면 pop한다.
    4. 마지막에 아무것도 남지 않으면 성공.
*/
#include <bits/stdc++.h>

using namespace std;

bool solution(string s)
{
    stack<char> stk;
    
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            stk.push(s[i]);
        } else {
            if (stk.empty()) {
                return false;
            } else {
                stk.pop();
            }
        }
    }
    
    if (stk.empty()) {
        return true;
    }

    return false;
}