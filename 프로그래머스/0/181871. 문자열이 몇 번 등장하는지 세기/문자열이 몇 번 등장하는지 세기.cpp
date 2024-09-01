#include <bits/stdc++.h>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    bool check;
    
    for (int i = 0; i <= myString.size() - pat.size(); ++i) {
        check = true;
        for (int j = i; j < pat.size() + i; ++j) {
            if (myString[j] != pat[j - i]) {
                check = false;
                break;
            }
        }
        if (check == true) {
            answer += 1;
        }
    }
    return answer;
}