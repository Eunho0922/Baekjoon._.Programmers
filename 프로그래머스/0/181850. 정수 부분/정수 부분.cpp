#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(double flo) {
    string answer = "";
    string str = to_string(flo);
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != '.')
            answer += str[i];
        else
            break;
    }
    return stoi(answer);
}