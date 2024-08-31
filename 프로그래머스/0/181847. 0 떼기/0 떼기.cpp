#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int i = 0;
    while (n_str[i] == '0') {
        n_str.erase(n_str.begin() + i);
    }
    answer = n_str;
    return answer;
}