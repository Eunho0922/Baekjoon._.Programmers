#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer(n, vector<int>(n, 0));
    int num = 1, row_idx = 0, col_idx = 0, len = n - 1;
    
    while(num <= n * n) {
        if(row_idx == (n - 1) / 2 && col_idx == n / 2) {
            answer[row_idx][col_idx] = num++;
        }
        for(int i = 0; i < len; ++i) {
            answer[row_idx][col_idx++] = num++;
        }
        for(int i = 0; i < len; ++i) {
            answer[row_idx++][col_idx] = num++;
        }
        for(int i = 0; i < len; ++i) {
            answer[row_idx][col_idx--] = num++;
        }
        for(int i = 0; i < len; ++i) {
            answer[row_idx--][col_idx] = num++;
        }
        len -= 2;
        row_idx++;
        col_idx++;
    }
    return answer;
}