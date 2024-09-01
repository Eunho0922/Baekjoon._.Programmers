#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for (int i = 0; i < strArr.size(); i++) {
        if (strArr[i].find("ad") == string::npos)
            answer.push_back(strArr[i]);
    }
    return answer;
}