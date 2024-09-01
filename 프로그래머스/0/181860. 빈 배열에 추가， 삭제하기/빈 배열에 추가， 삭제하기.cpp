#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> answer;
    for (int i = 0; i < flag.size(); i++) {
        if (flag[i] == true) {
            for (int j = 0; j < arr[i] * 2; j++) {
                answer.push_back(arr[i]);
            }
        } else {
            for (int j = 0; j < arr[i]; j++) {
                answer.erase(answer.end() - 1);
            }
        }
    }
    return answer;
}