#include <string>
#include <vector>
#include <sstream>
#include <bits/stdc++.h>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    
    vector<string> res;
    
    stringstream ss(binomial);
    string buf = "";
    
    while(getline(ss, buf, ' ')) {
        res.push_back(buf);
    }
    
    switch (res[1][0]) {
        case '+' :
            answer = stoi(res[0]) + stoi(res[2]);
            break;
        case '-' :
            answer = stoi(res[0]) - stoi(res[2]);
            break;
        case '*' :
            answer = stoi(res[0]) * stoi(res[2]);
            break;
    }
    return answer;
}