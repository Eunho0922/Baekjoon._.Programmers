#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    for (auto a: order) {
        if (a.find("americano") != string::npos) answer += 4500;
        else if (a.find("cafelatte") != string::npos) answer += 5000;
        else answer += 4500;
    }
    return answer;
}