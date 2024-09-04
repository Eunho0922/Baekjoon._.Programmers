/*
    조건 : 바구니에 같은 모양 인형 두 개가 생기면 사라진다.
    
    1. moves 순회 하면서 board[j++][moves[i]] 하면서 값 유무 확인
    2. 값을 만나면 board 스택에 추가 값은 0으로 초기화;
    3. board 스택에 push 할 경우 top에 해당하는 값이 push 하려는 값과 같으면 pop한뒤에 count ++;

    return : 크레인을 모두 작동시킨 후 터트려서 사라진 인형의 개수를 반환
*/

#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> stk;
        
    for (int i = 0; i < moves.size(); ++i) {
        for (int j = 0; j < board.size(); ++j) {
            cout << board[j][moves[i] - 1];
            if (board[j][moves[i] - 1] != 0) {
                if (!stk.empty()) {
                    if (board[j][moves[i] - 1] == stk.top()) {
                        stk.pop();
                        answer += 2;
                        board[j][moves[i] - 1] = 0;
                        break;
                    } else {
                        stk.push(board[j][moves[i] - 1]);
                        board[j][moves[i] - 1] = 0;
                        break;
                    }
                } else {
                    stk.push(board[j][moves[i] - 1]);
                    board[j][moves[i] - 1] = 0;
                    break;
                }
            }
        }
        cout << "\n";
    }
    
    return answer;
}