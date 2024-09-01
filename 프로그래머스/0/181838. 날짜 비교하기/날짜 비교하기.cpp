#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    int answer = 0;
    string d1 = "";
    string d2 = "";
    for (int i = 0; i < 3; i++) {
        d1 += to_string(date1[i]);
        d2 += to_string(date2[i]);
    }
    answer = stoi(d1) < stoi(d2)? 1 : 0;
    return answer;
}