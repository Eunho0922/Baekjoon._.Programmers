#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int i = 0;
    while (1) {
        if (arr.size() <= pow(2, i))
            break;
        ++i;
    }
    answer = arr;
    for (int j = arr.size(); j < pow(2, i); j++) {
        answer.push_back(0);
    }
    return answer;
}