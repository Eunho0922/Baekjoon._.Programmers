#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> strArr) {
    vector<int> len(31, 0);
    int answer = 0;
    for (int i = 0; i < strArr.size(); i++) {
        len[strArr[i].size()]++;
        answer = max(answer, len[strArr[i].size()]);
    }
    
    return answer;
}