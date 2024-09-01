#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    string temp = "";
    
    for (int i = 0; i < picture.size(); ++i) {
        for (int j = 0; j < picture[i].size(); ++j) {
            for (int q = 0; q < k; ++q) {
                temp += picture[i][j];
            }
        }
        for (int p = 0; p < k; ++p) {
            answer.push_back(temp);
        }
        temp = "";
    }
    return answer;
}