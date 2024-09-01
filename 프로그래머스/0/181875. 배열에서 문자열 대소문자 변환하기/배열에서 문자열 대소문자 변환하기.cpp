#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    string res = "";
    for (int i = 0; i < strArr.size(); ++i) {
        for (int j = 0; j < strArr[i].size(); ++j) {
            if (i % 2 == 0) {
                res += tolower(strArr[i][j]);
            } else {
                res += toupper(strArr[i][j]);
            }
        }
        answer.push_back(res);
        res = "";
    }
    return answer;
}