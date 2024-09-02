#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    vector<int> answer;
    int result;
    
    for (int i = 1; i <= rank.size(); ++i) {
        for (int j = 0; j < attendance.size(); ++j) {
            if (rank[j] == i && attendance[j] == true)
                answer.push_back(j);
        }
        if (answer.size() == 3) break;
    }
    
    
    result = 10000 * answer[0] + 100 * answer[1] + answer[2];
    return result;
}