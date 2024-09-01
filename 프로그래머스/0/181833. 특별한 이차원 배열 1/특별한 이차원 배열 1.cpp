#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    vector<int> result;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i)
                result.push_back(1);
            else
                result.push_back(0);
        }
        answer.push_back(result);
        result = {};
    }
    return answer;
}