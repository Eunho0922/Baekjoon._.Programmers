#include <bits/stdc++.h>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    for (auto& a: myString) {
        if (a == 'x') 
            a = ' ';
    }
    
    stringstream ss(myString);
    string buffer;
    
    while(ss >> buffer) {
        answer.push_back(buffer);
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}