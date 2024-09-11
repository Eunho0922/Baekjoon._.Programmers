/*
    return 각 배포마다 몇 개의 기능이 배포되는지 반환
    
    1. progress [] 까지 반복
    2. Progresses[i] += speeds[i];
    3. if Progresses[i] >= 100이면 front_pop() count += 1;
    4. Progresses[i + 1...] >= 100이면 front_pop() count += 1;
    5. answer.push_back(count);
    6. count = 0;
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int count = 0;
    
    while (progresses.size() != 0) {
        for(int i = 0; i < progresses.size(); ++i) {
            progresses[i] += speeds[i];
        }
        while (!progresses.empty() && progresses[0] >= 100) {
            progresses.erase(progresses.begin());
            speeds.erase(speeds.begin());
            count++;
        }
            if (count > 0) {
            answer.push_back(count);
            }
            count = 0;
    }
    
    return answer;
}